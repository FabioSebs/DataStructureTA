#include <iostream>
#include <vector>
#include "./sort.hpp"

int main() {
    std::vector<int> myVector = {10,9,8,7,6,5,4,3,2,1};
    Sorts sortingProgram(myVector);

    sortingProgram.insertionSort();
}

// Bubble Sort : Steps: 90 Swaps: 45
// Selection Sort : Steps: 55 Swaps:10 
// Insertion Sort : Steps: 54 Swaps: 10

// Swaps is the most memory consuming