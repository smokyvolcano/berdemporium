#include <iostream>
using namespace std;
#include <cstring>

int main(){

	string s;
	cin >> s;


	int n = s.length();
	n = getline(s, n);
	cout << n << endl;

	char char_array[n+1];
	strcpy(char_array, s.c_str());

	for (int i = 0; i<n; i++)
		cout << char_array[i] << " " << flush;
	
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