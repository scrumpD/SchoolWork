#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int choice;
	int secondChoice;
	float trigChoice;


	cout << "1) Simple Arithmetic 2) Square Root 3) Exponents 4) Trig: " << endl;
	cin >> choice;

	// ERROR CHECK (1)
	if (!cin or choice < 1 or choice > 4) {
		cout << "BAD INPUT!" << endl;
		exit(1);

	}


	// SIMPLE ARITHMETIC
	if (choice == 1) {
		cout << "1) addition 2) subtraction 3) multiplication 4) division: " << endl;

		cin >> secondChoice;

		if (!cin) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		// ADDITION
		if (secondChoice == 1) {
			cout << "Please enter two numbers: " << endl;

			cin >> choice;
			cin >> secondChoice;

			if (!cin) {
				cout << "BAD INPUT!" << endl;
				exit(1);
			}

			cout << choice + secondChoice << endl;

		}

		// SUBTRACTION
		else if (secondChoice == 2) {
			cout << "Please enter two numbers: " << endl;

			cin >> choice;
			cin >> secondChoice;

			if (!cin) {
				cout << "BAD INPUT!" << endl;
				exit(1);
			}

			cout << choice - secondChoice << endl;
		}

		// MULTIPLICATION
		else if (secondChoice == 3) {
			cout << "Please enter two numbers: " << endl;

			cin >> choice;
			cin >> secondChoice;

			if (!cin) {
				cout << "BAD INPUT!" << endl;
				exit(1);
			}

			cout << choice * secondChoice << endl;
		}

		// DIVISION

		else if (secondChoice == 4) {
			cout << "Please enter two numbers: " << endl;

			cin >> choice;
			cin >> secondChoice;

			if (!cin or secondChoice == 0) {
				cout << "BAD INPUT!" << endl;
				exit(1);

			}

			cout << choice / secondChoice << endl;
		}

		else {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		return 0;
	}

	// SQUARE ROOT
	if (choice == 2) {
		cout << "Please enter the number to square root: " << endl;
		cerr << "SQUARE ROOT" << endl;

		int sChoice;
		cin >> sChoice;

		if (sChoice < 0) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		if (!cin) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		cout << sqrt(sChoice) << endl;

		return 0;

	}

	// EXPONENTS
	if (choice == 3) {
		cout << "Please enter two numbers: " << endl;
		cerr << "EXPONENTS" << endl;

		float eChoice;
		float eSecondChoice;

		cin >> eChoice;
		cin >> eSecondChoice;

		if (!cin) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		std::cout.precision(2);
		std::cout << std::fixed << pow(eChoice, eSecondChoice) << endl;

		return 0;
	}

	// TRIG
	if (choice == 4) {

		float secondChoice;

		cout << "1) sine 2) cosine 3) tangent: " << endl;
		cin >> secondChoice;

		if (!cin) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		// SIN
		if (secondChoice == 1) {
			cout << "Please enter a number: " << endl;
			cin >> trigChoice;

			if (!cin) {
				cout << "BAD INPUT" << endl;
				exit(1);
			}

			std::cout.precision(2);
			std::cout << std::fixed << sin(trigChoice) << endl;

		}

		// COSINE
		else if (secondChoice == 2) {
			cout << "Please enter a number: " << endl;
			cin >> trigChoice;

			if (!cin) {
				cout << "BAD INPUT" << endl;
				exit(1);
			}

			std::cout.precision(2);
			std::cout << std::fixed << cos(trigChoice) << endl;
		}

		// TANGENT
		else if (secondChoice == 3) {
			cout << "Please enter a number: " << endl;
			cin >> trigChoice;

			if (!cin) {
				cout << "BAD INPUT!" << endl;
				exit(1);
			}

			std::cout.precision(2);
			std::cout << std::fixed << tan(trigChoice) << endl;

		}

		else {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		return 0;

	}

}
