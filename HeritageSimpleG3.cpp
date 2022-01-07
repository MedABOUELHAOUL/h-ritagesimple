// HeritageSimpleG3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Animal.h"
#include "Lion.h"
#include "Heure.h"
#include "DateH.h"
int main()
{

	Heure* H1 = new Heure(16, 45, 30);
	DateH* D1 = new DateH(16, 45, 50, 4, 2, 2022);
	DateH* D2= new DateH(17, 45, 50, 4, 1, 2022);
	H1->print(); 
	D1->print();

	std::cout << H1->operator>(*D1) << std::endl;
	std::cout << D1->Heure::operator>(*H1) << std::endl;
	std::cout << D1->operator>(*D2) << std::endl;
	//D1->Heure::print();


	std::cout << D1->maxDays() << std::endl;

/*	Animal A1("Animal1");
	Lion L1("Lion1", "white");
	A1.afficher(); // afficher de classe Animal
	//L1.afficher();//  afficher de la classe Lion



	A1=L1;  // tout Lion est un animal ==ok
	//L1=A1; // tout animal est un Lion == not ok
	A1.afficher();
*/
	//L1.Animal::afficher(); // afficher de la classe Animal
	// demasquage

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
