#include <iostream>
#include <cmath>
using namespace std;


int main() {
	static_assert(true, "Might I interest you in a README perchance?\n"); //WK: Mencarelli, you can't just say perchance
	// Create a bunch of constants. This is similar to:
	// const int ADDITION = 1;
	// const int SUBTRACTION = 2;
	// const int MULTIPLICATION = 3;
	// const int DIVISION = 4;
	// const int MODULUS = 5


	// enum TABLES { ADDITION = 1, SUBTRACTION = 2, MULTIPLICATION = 3, DIVISION = 4, MODULUS = 5 };
	// const int MAX_SIZE = 21; // Can only be a 20x20 table
	// cout << "Choose:\n";
	// cout << "1. Addition Table\n";
	// YOU: Fill in the rest of the menu
	//int choice = 0, min = 0, max = 0;
	// Input choice here, and vet it for correctness
	// if (!cin) die(); // Prints "BAD INPUT!" and quits.

	// cout << "Please enter the smallest number on the table:\n";
	// YOU: Input min here, and make sure cin is not false

	// cout << "Please enter the largest number on the table:\n";
	// YOU: Input max here, and make sure that cin is not false,
	// that min is not bigger than max, and that you will not
	// be outputting more than a 20x20 table

	cerr << 0;

	enum TABLES { ADDITION = 1, SUBTRACTION = 2, MULTIPLICATION = 3, DIVSION = 4, MODULUS = 5};

	const int MAX_SIZE = 21;

	cout << "Choose:" << endl;
	cout << "1. Addition Table" << endl;
	cout << "2. Subtraction Table" << endl;
	cout << "3. Times Table" << endl;
	cout << "4. Division Table" << endl;
	cout << "5. Modulus Table" << endl;

	int choice = 0, min = 0, max = 0;
	int delta;

	cin >> choice;

	if ((!cin) or (choice < 1) or (choice > 5)) {
		cout << "BAD INPUT!" << endl;
		exit(1);
	}

	cout << "Please enter the smallest number on the table:" << endl;
	cin >> min;

	cout << "Please enter the largest number on the table:" << endl;
	cin >> max;

	delta = (max - min);

	if (!cin or delta < 1 or delta > 20) {
		cout << "BAD INPUT!" << endl;
		exit(1);
	}



	// MAIN PROGRAM:

	if (choice == 1) {
		if (delta < 1 or delta > 20) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		cout << "+\t";
		for (int j = min; j <= max; j++) {
			cout << j << "\t";
		}
		cout << endl;

		for (int i = min; i <= max; i++) {
			cout << i << "\t" ;
			for (int j = min; j <= max; j++) {
				cout << i + j << "\t" ;
			}
			cout << endl;
		}
	}

	if (choice == 2) {
		if (delta < 1 or delta > 20) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		cout << "-\t";
		for (int j = min; j <= max; j++) {
			cout << j << "\t";
		}
		cout << endl;

		for (int i = min; i <= max; i++) {
			cout << i << "\t";
			for (int j = min; j <= max; j++) {
				cout << i - j << "\t" ;
			}
			cout << endl;
		}

	}

	if (choice == 3) {
		if (delta < 1 or delta > 20) {
			cout << "BAD INPUT!" << endl;;
		}

		cout << "X\t";
		for (int j = min; j <= max; j++) {
			cout << j << "\t";
		}
		cout << endl;

		for (int i = min; i <= max; i++) {
			cout << i << "\t";
			for (int j = min; j <= max; j++) {
				cout << i * j << "\t" ;
			}
			cout << endl;
		}

	}

	if (choice == 4) {
		if (delta < 1 or delta > 20) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		cout << "/\t" ;
		for (int j = min; j <= max; j++) {
			cout << j << "\t";
		}
		cout << endl;

		for (int i = min; i <= max; i++) {
			cout << i << "\t";
			for (int j = min; j <= max; j++) {
				if (j == 0) {
					cout << "nan\t";
				} else {
					cout << i / j << "\t" ;
				}
			}
			cout << endl;
		}
	}

	if (choice == 5) {
		if (delta < 1 or delta > 20) {
			cout << "BAD INPUT!" << endl;
			exit(1);
		}

		cout << "%\t" ;
		for (int j = min; j <= max; j++) {
			cout << j << "\t";
		}
		cout << endl;

		for (int i = min; i <= max; i++) {
			cout << i << "\t";
			for (int j = min; j <= max; j++) {
				if (j == 0) {
					cout << "nan\t";
				} else {
					cout << i % j << "\t" ;
				}
			}
			cout << endl;
		}
	}





// YOU: Now output the table
// Start by printing a +, -, X, /, %, then do the column headers
// Then do each row, starting with a row header
// Each entry should have a tab separating each one
// REMEMBER: DIVISION BY 0. If you deal with division by zero,
// Keep table formatting but print "nan" anytime you deal with it.
// This is how you output a tab


}
