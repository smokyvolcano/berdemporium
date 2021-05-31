#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int processSelection() {
	cout << "Enter selection: " << endl;

	int input;
	cin >> input;

	return input; //send "input"
}

int main() {

	showMenu();
	int input = processSelection(); //set a variable "input" to whatever the processSelection function outputs

	switch (input) {
		case 1:
			cout << "Searching..." << endl;
		case 2:
			cout << "Viewing..." << endl;
		case 3:
			cout << "Quitting..." << endl;
		default:
			cout << "Please select an item from the menu." << endl;
	}

	return 0;
}