// RsaCiel.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "RsaGestion.h"
#include "Hashgestion.h"
#include "AesGestion.h"

int main()
{
	HashGestion LM;
	std::string monMessageHash = ("C:\Users\CIEL23_admin\Documents\seq01_compil_cpp\act05-chiffrementCpp\attendu_chiffrement\lib_crypto_ciel\superMessage.txt");
	std::cout << LM.CalculateSHA256(monMessageHash) << std::endl;

}


