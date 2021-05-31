#include  <iostream>
using namespace std;

int main(){

    cout << "Array of integers" << endl;
    cout << "=================" << endl;
    int values[3];

    values[0] = 69;
    values[1] = 42;
    values[2] = 21;

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;

    cout << endl << "Array of doubles" << endl;
    cout << "=================" << endl;

    double numbers[4] = {4.5, 2.3, 7};

    for(int i=0; i<4; i++){

        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    cout << endl << "Initalizing with zero values" << endl;
    cout << "=================" << endl;

    int numberArray[8] = {};

    for(int i=0; i<8; i++){
        cout << "Element at index" << ": " << numberArray[i] << endl;
    }

    //Array of strings

    string texts[] = {"apple", "banana", "orange"};

    for(int i=0; i<3; i++){
        cout << "Element at index " << i << ": " << texts[i] << endl;
    }
    

    

    return 0;
}