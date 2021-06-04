#include <iostream>
using namespace std;

class Animal{
private:
	string name;

public:
	Animal(){
		cout << "Animal created." << endl;

	}

	-Animal(){
		cout << "Destructor called" << endl;
	}

	void setName(string name){
		this->name = name;
	}

	void speak() const{
		cout << "My name is: " << name << endl;
	}
};

Animal *createAnimal(){
	Animal *a = new Animal;
	a->setName("Fredo");
	return 0;
}

int main() {
	Animal cat;
	cat.setName("Freddy");
	cat.speak();
	return 0;
}