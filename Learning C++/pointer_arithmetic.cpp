#include <iostream>
using namespace std;

int main() {

	const int nStrings = 5;

	string texts[nStrings] = {"one", "two", "three", "four", "five"};

	string *pTexts = texts;

	pTexts += 3;

	cout << *pTexts << endl;

	pTexts -= 2;

	cout << *pTexts << endl;

	string *pEnd = &texts[nStrings];
	pTexts = &texts[0];

	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}

	//Set pTexts back to start
	pTexts = &texts[0];

	long elements = (long)(pEnd - pTexts);
	cout << elements << endl;

	pTexts += nStrings/2;
	cout << *pTexts << endl;
}