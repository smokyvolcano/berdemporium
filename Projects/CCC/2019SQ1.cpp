#include <iostream>
using namespace std;
#include <cstring>

int main(){


	int t1 = 1;
	int t2 = 2;
	int b1 = 3;
	int b2 = 4;
	int standard[2][2] = {{t1, t2}, {b1, b2}};
	// cout << t1 << " " << t2 << endl;
	// cout << b1 << " " << b2 << endl;


	string input;
	cin >> input;

	char* input_arr;
	string str_obj = input;
	input_arr = &str_obj[0];
	// cout << input_arr[0];

	int n = sizeof(input_arr)/sizeof(char);

	// int n = input.length();
	// char input_array[n+1]; // const char*
	// strcpy(input_array, input.c_str());

	// for (int i = 0; i<n; i++){
	// 	cout << input_array[i] << endl;;
	// }

	for (int i = 0; i<n+1; i++){
	
		// cout << "Bug Test" << " " << i << endl;

		if (input_arr[i] == 'H'){ 
			int s1 = t1;
			t1 = t2;
			t2 = s1;
			int s2 = b1;
			b1 = b2;
			b2 = s2;
		}

		if (input_arr[i] == 'V'){
			int s1 = t1;
			t1 = b1;
			b1 = s1;
			int s2 = t2;
			t2 = b2;
			b2 = s2;
		}

	}

	cout << t1 << " " << t2 << endl;
	cout << b1 << " " << b2 << endl;


	return 0;
}