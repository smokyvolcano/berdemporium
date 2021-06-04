#include <iostream>
using namespace std;

class Animal{
private:
	string name;

public:
	Animal(){
		cout << "Animal created." << endl;

	}

	~Animal(){
		cout << "Destructor called" << endl;
	}

	void setName(string name){
		this->name = name;
	}

	void speak() const{
		cout << "My name is: " << name << endl;
	}
};


int main() {
	
	Animal *pCat1 = new Animal();
	pCat1->setName("Freddy");
	pCat1->speak();
	delete pCat1;

	return 0;
} // cat is out of scope after it hits }