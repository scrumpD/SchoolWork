#include "/public/read.h"
#include <vector>
#include <cassert>
using namespace std;

//NO LOOPS ALLOWED - RECURSION ONLY
int recursive_sum(const vector<int> &vec, size_t index = 0) {
	assert(index <= vec.size());

	//Base Case
	if (index == vec.size()) {
		return 0;
	}

	//Inductive Step - the "bt" (backtrace) command will be useful in GDB here
	return vec.at(index) + recursive_sum(vec,index++);
}

int main() {
	vector<int> vec;
	while (true) {
		int x = read("Please enter a number (0 to quit):\n");
		if (!x) break;
		vec.push_back(x);
	}
	cout << recursive_sum(vec) << endl;
	cout << recursive_sum(vec,500) << endl;
}
