#include "/public/read.h"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num = read("Please enter an int to factorize:\n");
	vector<int> factors;
	while (true) {
		int factor = 1;
		if (num == 1) break;
		if (num % factor == 0) { //This is a factor
			factors.push_back(factor);
			num = num / factor;
		}
		else
			factor++;
	}
	for (int x : factors)
		cout << x << endl;
}
