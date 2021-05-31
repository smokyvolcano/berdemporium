#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int getInput() {
	cout << "Enter selection: " << endl;

	int input;
	cin >> input;

	return input; //send "input"
}

void processSelection(int option) {
	switch (option) {
		case 1:
			cout << "Searching..." << endl;
		case 2:
			cout << "Viewing..." << endl;
		case 3:
			cout << "Quitting..." << endl;
		default:
			cout << "Please select an item from the menu." << endl;
	}
}

int main() {

	showMenu();
	int selection = getInput(); //set a variable "input" to whatever the getInput function outputs
	processSelection(selection); //passes "selection" into the void
	
	return 0;
}