#include <iostream>
#include <set>
#include <array>

using namespace std;

int main() {
	array<int,5> myArr;
	set<int> mySet;
	
	//INSERTION
	mySet.insert(10);
	mySet.insert(100);
	mySet.insert(30);
	mySet.insert(50);

	//DELETING ------ DELETE BY VALUE !! NOT DELETE BY INDEX
	mySet.erase(10);

	//PRINTING OUT
	set<int>::iterator it;

	for(it = mySet.begin(); it != mySet.end(); it++) {
		cout << *it << endl;
	}
}
