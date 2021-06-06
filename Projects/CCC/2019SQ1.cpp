#include <iostream>
using namespace std;
#include <cstring>

int main(){

	char H = "H";
	char V = "V";

	int t1 = 1;
	int t2 = 2;
	int b1 = 3;
	int b2 = 4;
	int standard[2][2] = {{t1, t2}, {b1, b2}};
	cout << t1 << " " << t2 << endl;
	cout << b1 << " " << b2 << endl;


	string input;
	cin >> input;

	int n = input.length();
	
	char input_array[n+1];
	strcpy(input_array, input.c_str());
	//char array now = the string of HV

	for (int i; i<n; i++){
		if (input_array[i] == H){
			int s1 = t1;
			t1 = t2;
			t2 = s1;
			int s2 = b1;
			b1 = b2;
			b2 = s2;
		}

		if (input_array[i] == V){
			int s1 = t1;
			t1 = b1;
			b1 = s1;
			int s2 = t2;
			t2 = b2;
			b2 = s2;
		}

	}


	return 0;
}