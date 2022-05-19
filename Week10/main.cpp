#include <iostream>
#include <vector>
#include "./sort.hpp"

int main() {
    std::vector<int> myVector = {10,9,8,7,6,5,4,3,2,1};
    Sorts sortingProgram(myVector);

    sortingProgram.printArray();
    sortingProgram.mergeSort(&myVector, 0, myVector.size()-1);
    
    for (int i : myVector) {
        std::cout << i << "\t";
    }
}