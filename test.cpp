#include <set>
#include <iostream>

using namespace std;

int main() {
	set<int> test;
	test.insert(10);
	test.insert(11);
	test.insert(12);
	test.insert(13);

	//ITERATION
	set<int>::iterator it;

	for (it = test.begin(); it!= test.end(); ++it){
		cout << *it << endl;
	}
}
