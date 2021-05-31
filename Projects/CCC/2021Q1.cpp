// https://cemc.math.uwaterloo.ca/contests/computing/2021/ccc/juniorEF.pdf

#include <iostream>
#include <regex>
using namespace std;

int main() {

	int b; // temperature at which water boils

	cin >> b;

	int p = 5 * b - 400;
	cout << p << endl;

	if (p < 100) {
		cout << "-1" << endl;
	} else {
		if (p > 100){
			cout << "1" << endl;
		} else {
			cout << "0" << endl;
		}
	}


return 0;

}