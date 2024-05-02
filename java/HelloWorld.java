//Equivalent to #include <scanner>
import java.util.Scanner;
//Equivalent to #include <cmath>
import static java.lang.Math.*;

//Every programming language does the same six or seven things:
//1. Input and Output
// cout: System.out.println
// cin: java.util.Scanner scan(System.in); scan.nextInt();
//2. Make variables
//		primitives are (mostly) the same
//		They also have capital I Integer, Float, etc. They will box/unbox automatically
//3. Do algebra
//		yeah, the same 
//4. Have branches (if statements)
//		the same 
//		No "and" or "or" in Java, you must use && and ||
//5. Loops 
//		also the same
//		You can do regular for loops, ranged-for loops, while loops, etc.
//6. Functions
//		There are no global functions in Java. Everything is in a class
//		If you want a "global function" you make it "static"
//		Otherwise, they're really the same
//		Math functions are in java.lang.Math, like sin, cos, etc.
//7. Arrays/vectors
//		int[] arr = new int[100];
//		arr[10] = 42;
//		List<Integer> vec = new ArrayList<Integer>(); //equivalent to vector<int> vec;
//		vec.add(5); //vec.push_back(5);
//		int x = vec.get(10); //vec.at(10);
//8. Classes
//		class HelloWorld {
//		LOVE: No need for a ; at the end
//		Rather than public: and private: sections, each member is tagged as public or private (etc.)
//		Four access levels: public, private, protected (same as C++), and no modifier (default) which makes it public within the package you're in (all classes in the package can see it), but private outside the package
//9. File I/O
//		File myObj = new File("filename.txt"); //ifstream ins("filename.txt");
//		Scanner myReader = new Scanner(myObj);
//			or
//		objReader = new BufferedReader(new FileReader("D:\DukesDiary.txt"));
class HelloWorld {
	//This is how you make a "free" function in Java
	static double hypot(double a, double b) {
		return sqrt(a*a+b*b);
	}
	//Make a function bob that takes two doubles and if a > b returns 2*a 
	//  otherwise return abs(2*b)
	static double bob(double a, double b) {
		//C++ here would use a string class string
		String foo = new String("I am foo");
		foo += foo; //The + operator on strings is the ONLY overloaded operator in Java
		System.out.println(foo);
		if (a > b) return 2*a;
		else return abs(2*b);
	} //In C++ the ~string destructor cleans up memory for you
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); //This makes a variable that's basically cin
		System.out.println("Please enter how many hello worlds you want:");
		int[] arr = new int[100]; //Java has new but not delete
		arr[10] = 42;
		//arr[100] = 99; //This will cause the program to die

		//int x = 0;
		//cin >> x;
		//int x = read();
		int x = cin.nextInt(); //This reads an int from the keyboard
		float f = cin.nextFloat(); //Read a float from the keyboard
		//If x is less than 0 print x is too small
		//else if x is less than 10, do the for loop
		//else print "Sorry, x is too big"
		if (x < 0) {
			System.out.print("x is too small"); //cout << "x is too small";
			System.out.print("x is too small\n"); //cout << "x is too small\n";
			System.out.println("x is too small"); //cout << "x is too small" << endl;
		}
		else if (x < 10) {
			for (int i = 0; i < x; i++) {
				System.out.println("Hello World!"); //println is cout << whatever << endl; (print is no endl)
			}
		}
		else
		{
			//Print 2*x - 3
			System.out.println(Integer.toString(2*x-3));
		}
		//cout << "hypot(3,4):" << to_string(hypot(3,4)) << endl;
		System.out.println("hypot(3,4):" + Double.toString(hypot(3,4)));
	}
}
