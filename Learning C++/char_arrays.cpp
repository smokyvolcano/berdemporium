#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";

	for(int i=0; i<sizeof(text); i++) {
		cout << i << ": " << text[i] << flush;
	}

	return 0;
}