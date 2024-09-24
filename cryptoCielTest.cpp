// RsaCiel.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "RsaGestion.h"
#include "Hashgestion.h"
#include "AesGestion.h"

int main()
{
	/*
	/HashGestion LM;
	std::string monMessageHash = ("C:\Users\CIEL23_admin\Documents\seq01_compil_cpp\act05-chiffrementCpp\attendu_chiffrement\lib_crypto_ciel\superMessage.bin");
	std::cout << LM.CalculateSHA256(monMessageHash) << std::endl;
	*/

	
	AesGestion cryptAES;
	cryptAES.GenerateAESKey();
	std::string monFichierCle = "maCleSecrete.bin";
	std::string clairMessage = "message_secret.txt";
	std::string chiffreMessage = "message_chiffre.txt";
	std::string dechiffreMessage = "message_dechiffre.txt";
	//cryptAES.SaveAESKeyToFile(monFichierCle);
	cryptAES.LoadAESKeyFromFile(monFichierCle);
	cryptAES.EncryptFileAES256(clairMessage, chiffreMessage);
	cryptAES.DecryptFileAES256(chiffreMessage, dechiffreMessage);
	


	//RsaGestion cryptRSA;
	//cryptRSA.generationClef(PApublic,PAprivée);

}


