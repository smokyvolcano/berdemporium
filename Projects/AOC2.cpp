#include <iostream>
#include <regex>
using namespace std;

int main(){

	int lolol [] = {
		//array of input
		"4-9 m: xvrwfmkmmmc"
	};
	for (int i=1; i<=1000; i++){
		//string poggers = "4-9 m: xvrwfmkmmmc";
		string poggers = lolol[i];
		regex getYeeted("(\\d\\-)");
		smatch lmao;
		regex_search(poggers, left, getYeeted);
		// left is an array
    	for (auto x : lmao) {
        	cout << x << " "; 
    	return 0; 
		}
	}
	
	

	
}