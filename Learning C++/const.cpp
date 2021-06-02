#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	void setName(string name) {this->name = name; };
	void speak() const {cout << "My name is: " << name << endl; }
};

int main(){
	const int PI = 3.14159265;
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	return 0;
}