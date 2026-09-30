#include <iostream>
#include <cstdlib>

void pauseEtContinuer() {
	int choix;

	std::cout << "\n========================================\n";
	std::cout << "        Que voulez-vous faire ?\n";
	std::cout << "========================================\n";
	std::cout << "1. Retourner au menu\n";
	std::cout << "0. Quitter le programme\n";
	std::cout << ">> ";
	std::cin >> choix;

	if (choix == 0) {
		std::cout << "\nAu revoir et merci !\n";
		exit(0);
	}
	system("cls");
}

void exercice1() {
	std::cout << "\n========================================\n";
	std::cout << "              EXERCICE 1\n";
	std::cout << "                 SOMME\n";
	std::cout << "========================================\n";

	int a, b;

	std::cout << "Donnez une valeur : ";
	std::cin >> a;

	std::cout << "Donnez une autre valeur : ";
	std::cin >> b;

	std::cout << "\n----------------------------------------\n";
	std::cout << "La somme est : " << a + b << std::endl;
	std::cout << "----------------------------------------\n";

	pauseEtContinuer();
}

void exercice2() {
	std::cout << "\n========================================\n";
	std::cout << "              EXERCICE 2\n";
	std::cout << "             PERMUTATION\n";
	std::cout << "========================================\n";

	int a, b, c;

	std::cout << "Donnez la valeur de a : ";
	std::cin >> a;

	std::cout << "Donnez la valeur de b : ";
	std::cin >> b;

	c = a;
	a = b;
	b = c;

	std::cout << "\n----------------------------------------\n";
	std::cout << "Apres permutation :\n";
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "----------------------------------------\n";

	pauseEtContinuer();
}

void exercice3() {
	std::cout << "\n========================================\n";
	std::cout << "              EXERCICE 3\n";
	std::cout << "                 CUBE\n";
	std::cout << "========================================\n";

	int a;

	std::cout << "Donnez une valeur : ";
	std::cin >> a;

	std::cout << "\n----------------------------------------\n";
	std::cout << a << " au cube = " << a * a * a << std::endl;
	std::cout << "----------------------------------------\n";

	pauseEtContinuer();
}

void exercice4() {
	std::cout << "\n========================================\n";
	std::cout << "              EXERCICE 4\n";
	std::cout << "                MOYENNE\n";
	std::cout << "========================================\n";

	double somme = 0;
	double note;

	for (int i = 1; i <= 5; i++) {
		std::cout << "Donnez la note " << i << " : ";
		std::cin >> note;

		somme += note;
	}

	std::cout << "\n----------------------------------------\n";
	std::cout << "La moyenne = " << somme / 5 << std::endl;
	std::cout << "----------------------------------------\n";

	pauseEtContinuer();
}

void exercice5() {
	std::cout << "\n========================================\n";
	std::cout << "              EXERCICE 5\n";
	std::cout << "              PERIMETRE\n";
	std::cout << "========================================\n";

	double rayon;
	const double PI = 3.14;

	std::cout << "Donnez un rayon : ";
	std::cin >> rayon;

	double perimetre = 2 * PI * rayon;

	std::cout << "\n----------------------------------------\n";
	std::cout << "Le perimetre = " << perimetre << std::endl;
	std::cout << "----------------------------------------\n";

	pauseEtContinuer();
}

void exercice6() {
	std::cout << "\n========================================\n";
	std::cout << "              EXERCICE 6\n";
	std::cout << "          TRIANGLE RECTANGLE\n";
	std::cout << "========================================\n";

	int a, b, c;

	std::cout << "Donnez la valeur de l'hypotenuse : ";
	std::cin >> a;

	std::cout << "Donnez la valeur du cote oppose : ";
	std::cin >> b;

	std::cout << "Donnez la valeur du cote adjacent : ";
	std::cin >> c;

	std::cout << "\n----------------------------------------\n";

	if (a * a == b * b + c * c) {
		std::cout << "Le triangle est RECTANGLE." << std::endl;
	}
	else {
		std::cout << "Le triangle n'est PAS RECTANGLE." << std::endl;
	}

	std::cout << "----------------------------------------\n";

	pauseEtContinuer();

}

void exercice7() {
	std::cout << "\n========================================\n";
	std::cout << "              EXERCICE 7\n";
	std::cout << "           SAISIE CORRECTE\n";
	std::cout << "========================================\n";

	int a;

	std::cout << "Donnez un nombre entre 10 et 20 : ";
	std::cin >> a;

	while (a < 10 || a > 20) {

		if (a < 10) {
			std::cout << "Plus grand !\n";
		}
		else {
			std::cout << "Plus petit !\n";
		}

		std::cout << "Donnez un nombre entre 10 et 20 : ";
		std::cin >> a;
	}

	std::cout << "\n----------------------------------------\n";
	std::cout << "Le nombre " << a
		<< " est bien compris entre 10 et 20 !\n";
	std::cout << "----------------------------------------\n";

	pauseEtContinuer();
}

void choix() {

	int a = 0;

	while (true) {

		std::cout << "\n\n";
		std::cout << "========================================\n";
		std::cout << "          MENU DES EXERCICES\n";
		std::cout << "========================================\n\n";

		std::cout << "1. Somme\n";
		std::cout << "2. Permutation\n";
		std::cout << "3. Cube\n";
		std::cout << "4. Moyenne\n";
		std::cout << "5. Perimetre d'un cercle\n";
		std::cout << "6. Triangle rectangle\n";
		std::cout << "7. Saisie correcte\n";
		std::cout << "8. Quitter\n";

		std::cout << "\n========================================\n";
		std::cout << "Choisissez un exercice (1-7) : ";
		std::cin >> a;

		switch (a) {

		case 1:
			exercice1();
			break;

		case 2:
			exercice2();
			break;

		case 3:
			exercice3();
			break;

		case 4:
			exercice4();
			break;

		case 5:
			exercice5();
			break;

		case 6:
			exercice6();
			break;

		case 7:
			exercice7();
			break;

		case 8:
			std::cout << "\nAu revoir et merci !\n";
			return;

		default:
			std::cout << "\nErreur : veuillez choisir un nombre entre 1 et 8.\n";
			break;
		}
	}
}

int main() {
	choix();
}