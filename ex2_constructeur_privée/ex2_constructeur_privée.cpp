// ex2_constructeur_privée.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <iostream>
#include"Point.h"
#include "Cercle.h"
using namespace std;
int main()
{
	Point P1 = Point::creator();
	Point P2 = Point::creator(5.3, 4.6); 
	cout<< P1.m_print();
	Cercle C1;
	Cercle C2(P2, 3.5);
	Cercle C3 = C2;
	cout << "C1:";
	C1.m_print();
	cout << "C2:";
	C2.m_print();
	cout << "C3:";
	C3.m_print();
	C3.m_translate(1.5, 3.5);
	cout << " translation de C3:";
	C3.m_print();
	cout << "COMPaRAISON DE C2 ET C3 :" << endl;
	if (C3 == C2)
		cout << "C3 ET C2 SONT egaux" << endl;
	else
		cout << "C3 ET C2 NE SONT PAS EGAU" << endl;
	cout << "perimetre de C2:" << C2.m_perimetre() << endl;
	cout << "surface de C2:" << C2.m_surface() << endl;

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
