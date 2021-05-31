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
}