#include<iostream>
#include <array>

using namespace std;

void recursion(array<int,4> &myArray, int iterator) {
	//BASE CASE
	if (iterator <= myArray.size()-1) {

		cout << myArray[iterator] << endl;
	};

	// RECURSION
	recursion(myArray, iterator+1);	
}


int main() {
	//MAKING VARIABLES
	array<int,4> myArray = {1,2,3,4};

	//Linear O(n) <----- better if search space is not minimized on a recursive function
	for (int i : myArray) {
		cout << i << endl;
	}

	// Recursively O(n) <------ better if search space is minimized
	recursion(myArray, 0);	
}


