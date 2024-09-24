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

	/*
	AesGestion cryptAES;
	cryptAES.GenerateAESKey();
	std::string monFichierCle = "maCleSecrete.bin";
	std::string clairMessage = "message_secret_AES.txt";
	std::string chiffreMessage = "message_chiffre_AES.txt";
	std::string dechiffreMessage = "message_dechiffre_AES.txt";
	//cryptAES.SaveAESKeyToFile(monFichierCle);
	cryptAES.LoadAESKeyFromFile(monFichierCle);
	cryptAES.EncryptFileAES256(clairMessage, chiffreMessage);
	cryptAES.DecryptFileAES256(chiffreMessage, dechiffreMessage);
	*/


	RsaGestion cryptRSA;
	std::string PApublic = "PAClePublic.PEM";
	std::string PAprive = "PAClePrive.PEM";
	std::string message_secret_RSA = "message_secret_RSA.txt";
	std::string message_chiffre_RSA = "message_chiffre_RSA.txt";
	cryptRSA.generationClef(PApublic, PAprive,1024);
	cryptRSA.chiffrementFichier(message_secret_RSA, message_chiffre_RSA, true);
	//cryptRSA.dechiffrementRsa();


}


