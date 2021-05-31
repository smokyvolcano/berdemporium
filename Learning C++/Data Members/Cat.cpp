#include "Cat.h"
#include <iostream>

using namespace std;

void Cat::speak(){

	if(happy){
		cout << "Meow" << endl;
	}
	else {
		cout << "Hiss" << endl;
	}

	cout << "Meow" << endl;
}

void Cat::makeHappy(){
	happy=true;
}

void Cat::makeSad(){
	happy=false;
}