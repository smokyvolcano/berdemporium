#include <iostream>
using namespace std;

int main(){

	double value1 = 7/2; //will ignore remider
	cout << value1 << endl;

	double value11 = 7.0/2; //works
	cout << value11 << endl;

	double value12 = (double)7/2; //casting
	cout << value12 << endl;

	int value2 = (int)7.3;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1; //value3 = value3+1 or value3++
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; // value4 = value4/5
	cout << value4 << endl;

	int value5 = 13%5; //take the reminder and store it in value5
	cout << value5 << endl;

	double equation = ((5/4)%2)+(2*3.6); //order of operations
	cout << equation << endl;

	//Take large number of seconds and convert it to hours, minutes, seconds
	
	return 0;
}