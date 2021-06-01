#include <iostream>
using namespace std;
#include <cstring>

int main(){

	string input;
	getline(cin, input);

	int n = input.length();
	cout << n << endl;

	char char_array[n+1];
	strcpy(char_array, input.c_str());

	for (int i = 0; i<n; i++){
		cout << char_array[i] << " " << flush;
	}
	
	//char space [] = stringInput;

	//int nChars = sizeof(space)-1;
	
	//char *pStart = space;
	//char *pEnd = space + nChars - 1;

	//while (pStart <= pEnd){
		//cout << *pStart << " " << flush;
		//pStart++;
	//}

	return 0;
}