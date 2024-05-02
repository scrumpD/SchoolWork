#include <gtest/gtest.h>
#include <iostream>
#include <cstdlib>
using namespace std;

//YOU: Write fizzbuzz
//Return "Fizz" if x is divisible by 3
//Return "Buzz" if x is divisible by 5
//Return "Fizzbuzz" if x is divisible by both 3 and 5
//Return a string containing the number otherwise
//Return "Error" if x is less than 1 or greater than 100

int fizzBuzz() {  

	for (int x = 1; x <= 100; x++) {
		
		if (x < 1 or x > 100) {
			cout << "Error" << endl; 
		}
			
		else if (x % 3 == 0 and x % 5 == 0) {
			cout << "Fizzbuzz" << endl; 
		} 

		else if (x % 3 == 0) {
			cout << "Fizz" << endl; 
		}	

		else if (x % 5 == 0) {
			cout << "Buzz" << endl; 
		}  

	return 0; 
}


string fizzbuzz(int x) {
	//This won't compile, since it's not returning anything
	if (x % 3 != 0 and x % 5 != 0) {
		cout << x; 
	} 
	return "";
}

//YOU: Write tests to test your fizzbuzz implementation
TEST(Fizzbuzz, GoodTests) {
	EXPECT_EQ(fizzbuzz(11), "11");
	EXPECT_EQ(fizzbuzz((1+rand() % 100)/15*15), "Fizzbuzz");
	EXPECT_EQ(fizzbuzz(3), "Fizz");
	EXPECT_EQ(fizzbuzz(5), "Buzz"); 
	EXPECT_EQ(fizzbuzz(6), "Fizz"); 
	EXPECT_EQ(fizzbuzz(9), "Buzz");	
	EXPECT_EQ(fizzbuzz(10), "Fizz");
	EXPECT_EQ(fizzbuzz(12), "Buzz");
	EXPECT_EQ(fizzbuzz(15), "FizzBuzz");
	EXPECT_EQ(fizzbuzz(18), "Fizz");
	EXPECT_EQ(fizzbuzz(20), "Buzz");
}

//YOU: Write your own tests to check bad inputs here
TEST(Fizzbuzz, BadTests) {
	EXPECT_EQ(fizzbuzz(-50), "Error");
	EXPECT_EQ(fizzbuzz(-500), "Error");
	EXPECT_EQ(fizzbuzz(-500000000), "Error");
	EXPECT_EQ(fizzbuzz(999999999), "Error");	
	EXPECT_EQ(fizzbuzz(-999999999), "Error");
	EXPECT_EQ(fizzbuzz(500), "Error");
	EXPECT_EQ(fizzbuzz(10000), "Error");
	EXPECT_EQ(fizzbuzz(-10000), "Error");
	EXPECT_EQ(fizzbuzz(-10000000), "Error");	
	EXPECT_EQ(fizzbuzz(10000000), "Error");


}

//iYOU: Write your own tests to check edge inputs here, like for 0,1,99,etc.
TEST(Fizzbuzz, EdgeTests) {
}

//YOU: Now write a function called fizzbuzz2, that is exactly the same as fizzbuzz, but with one important change.
//Before returning a number, add the digits of the number together, and use the result from that sum with the same
// rules. For example, 23 would return "Buzz" because 2+3 = 5. 
string fizzbuzz2(int x) {
	return "";
}

//YOU: Now write good, bad, and edge cases for fizzbuzz2 as well.

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	srand(time(0));
#ifndef FOO
	//Stop people from compiling this code using 'compile'
	static_assert(false,"Type 'make' to build this, not 'compile'");
#endif
	cout << "Welcome to Fizzbuzz 2000(tm). Choose one of the following options:\n";
	cout << "fizzbuzz   - will run fizzbuzz from 1 to 100.\n";
	cout << "fizzbuzz2  - will run fizzbuzz2 from 1 to 100.\n";
	cout << "(a number) - will run fizzbuzz and fizzbuzz2 on just that number.\n";
	cout << "test       - will run the test suite you've created.\n";
	string s;
	getline(cin,s);
	if (s == "test") return RUN_ALL_TESTS(); 
	else if (s == "fizzbuzz") {
		//YOU: Write code that will output the result of the fizzbuzz function from 1 to 100 here:
	}
	else if (s == "fizzbuzz2") {
		//YOU: Write code that will output the result of the fizzbuzz2 function from 1 to 100 here:
	}
	else { //Just a number, so feed it to each function and output the result
		int x = stoi(s);
		cout << "Fizzbuzz (" << x << ") = " << fizzbuzz (x) << endl;
		cout << "Fizzbuzz2(" << x << ") = " << fizzbuzz2(x) << endl;
	}
}
