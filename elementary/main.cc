#include <iostream>
using namespace std;

// Welcome back to elementary school...GL;HF!
int main() {
	string name;
	cout << "Enter your teacher's name: " << endl;
	cin >> name;
	// Print: cout << endl after reading in

	cout << "Welcome to " << name << "'s class. We're going to be doing some maths!" << endl; // Print: "Welcome to " << name << "'s class. We're going to be doing some maths!" followed by an endl

	cout << "Enter a: " << endl; // Print: "Enter a: " followed by an endl
	double a = 0;// Create a double named a and initialize it to 0
	cin >> a; // Read from cin into a
	cout << "Enter b: " << endl; // Print: "Enter b: " followed by an endl
	double b;// Create a double named b
	cin >> b;// Read from cin into b
	cout << "The sum of a and b is: " << endl;  // Print: "The sum of a and b is: " followed by an endl
	cout << (a + b) << endl;// Print the sum of a and b followed by an endl
	cout << "The difference of a and b is: "  << endl;// Print: "The difference of a and b is: " followed by an endl

	cout << (a - b) << endl;// Print the difference of a and b followed by an endl
	cout << "How many games do you have?" << endl; // Print: "How many games do you have?" followed by an endl
	int games = 0;// Create an int named games and initialize it to 0
	cin >> games; // Read from cin into games
	cout << "What is the average value of your games?" << endl;// Print: "What is the average value of your games?" followed by an endl
	double value = 0;// Create a double named value and initialize it to 0
	cin >> value;// Read from cin into value
	cout << "The value of your collection is: " << (games * value) << endl;//Print: "The value of your collection is: " followed by (on the same line) games * value followed by an endl
	cout << "You received a new game, what is its value?" << endl;// Print: "You received a new game, what is its value? " followed by an endl
	double newGame = 0;// Create a double named newGame and initialize it to 0
	cin >> newGame;// Read from cin into new<F7>Game
	cout << "With all your games, the average of your collection is " << (value + newGame) / (games + 1) << endl;// Print (on one line): "With all your games, the average of your collection is " followed by (value + newGame) / (games + 1) followed by an endl
	cout << "You will have " << (games + 1) % 3 << " amount extra out of three stacks!" << endl; // Print: "You will have " followed by (games + 1) % 3 " amount extra from out of three stacks!" followed by an endl

	cout << "Goodbye. Thanks for joining " << name << "'s class. Hope you have a great semester!" << endl;  // Print: "Goodbye. Thanks for joining " followed by your name "'s class. Have a great semester!" followed by an endl

	return 0;
}
