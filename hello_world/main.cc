#include <iostream>
#include <basic>
#include <type_traits>
using namespace std;

// Vim Commands
// x - delete letter
// . - repeat last command
// yy - copy current line
// 3yy - copy 3 lines
// p - paste (below current line)
// P - paste (above current line)
// dd - delete current line
// d5d - delete five lines
// $ and ^ to jump to the beginning and end of a line
// A appends at the end of a line
// I inserts at the beginning of the line
// o opens in insert mode below the line
// O opens in insert mode above the line
// :q! quit without saving
// ZZ save and quit
// u is undo
// shift + v - highlight

int main() {


	int x = 0; 
	cout << "Enter x:/n"; 
	cin >> x; 
	cout << "#1 " << 2*5+5 << endl; 
	cout << "#2: " << (10*x)/11-2 << endl;

	return 0;
}
