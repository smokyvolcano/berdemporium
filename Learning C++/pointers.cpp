#include <iostream>
using namespace std;

void manipulate(double *pvalue) {
	cout << "2. Value of double in manipulate: " << *pvalue << endl;
	*pvalue = 10.0;
	cout << "3. Value of double in manipulate: " << *pvalue << endl;
}

int main() {
	
	int nValue = 8; //sets nValue to memory

	int* pnValue = &nValue; //intPointer 
	//&=address

	nValue = 9;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl; //memory location of nValue
	cout << "Int value via pointer: " << *pnValue << endl; //dereferncing a pointer, reverses process


	int a = 7;
	int* pa = &a;

	a = 8;

	cout << a << endl; //gives you 8
	cout << pa << endl; //gives you hexadecimal storage unit
	cout << *pa << endl; //dereferences the integer and gies 8 (basically reverse)

	cout << "======================" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;

	return 0;
}