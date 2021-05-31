// https://cemc.uwaterloo.ca/contests/computing/2020/ccc/juniorEF.pdf
//Barley the dog loves treats. 
// At the end of the day he is either happy or sad depending on the number and size of treats he receives throughout the day. 
// The treats come in three sizes: small, medium, and large. 
// His happiness score can be measured using the following formula: 
// 1 × S + 2 × M + 3 × L where S is the number of small treats, M is the number of medium treats and L is the number of large treats.
// If Barley’s happiness score is 10 or greater then he is happy. Otherwise, he is sad. 
// Determine whether Barley is happy or sad at the end of the day.

#include <iostream>
using namespace std;

int main(){

    int sTreat; //Number of Small Treats
    int mTreat; //Number of Medium Treats
    int lTreat; //Number of Large Treats


    
    
    cout << "Number of Small Treats" << endl;
    cin >> sTreat;
   
    cout << "Number of Medium Treats" << endl;
    cin >> mTreat;

    cout << "Number of Large Treats" << endl;
    cin >> lTreat;

    int total = 1*sTreat+2*mTreat+3*lTreat;

    if(total<10){
        cout << "sad" << endl;
    }

    if(total>=10){
        cout << "happy" << endl;
    }
}
    