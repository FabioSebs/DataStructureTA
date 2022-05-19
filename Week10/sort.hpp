#include <iostream>
#include <vector>

class Sorts
{
public:
    std::vector<int> testArray;
    int steps;

    Sorts(std::vector<int> arr) : testArray(arr), steps(0){};
    void printArray();
    void bubbleSort();
    void selectionSort();
    void insertionSort();
    void mergeSort(std::vector<int> *arr, int low, int high);
    void merge(std::vector<int> *arr, int low, int high, int mid);
    void swap(int *a, int *b);
};

void Sorts::swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sorts::printArray()
{
    std::cout << "\nOriginal Array\n\n";
    for (int i = 0; i < this->testArray.size(); i++)
    {
        if (i != this->testArray.size() - 1)
        {
            std::cout << this->testArray[i] << "\t";
            continue;
        }
        std::cout << this->testArray[i] << std::endl;
    }
}

void Sorts::bubbleSort()
{
    // Printing Original Vector
    this->printArray();

    // Sorting Vector
    for (int i = 0; i < this->testArray.size(); i++)
    {
        for (int j = i + 1; j < testArray.size(); j++)
        {
            if (this->testArray[j] < this->testArray[i])
            {
                this->swap(&this->testArray[i], &this->testArray[j]);
                ++this->steps;
            }
        }
    }

    // Printing Sorted Vector
    this->printArray();

    // Steps
    std::cout << "\nSteps:\t" << this->steps << "\n\n";
    this->steps = 0;
};

void Sorts::selectionSort(){
  // Printing Original Vector
    this->printArray();

    // Sorting Vector
    for (int i = 0; i < this->testArray.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < testArray.size(); j++)
        {

            if (this->testArray[j] < this->testArray[min])
            {
                min = j;
            }
            this->steps++;
        }

        this->swap(&this->testArray[min], &this->testArray[i]);
    }

    // Printing Sorted Vector
    this->printArray();

    // Steps
    std::cout << "\nSteps:\t" << this->steps << "\n\n";
    this->steps = 0;  
};

void Sorts::insertionSort(){
    // Printing Original Vector
    this->printArray();

    // Sorting Vector
    int i, key, j; 
    for (i = 1; i < this->testArray.size(); i++)
    {
        int key = this->testArray[i];
        int j = i - 1;

        while (j >= 0 && this->testArray[j] > key) {
            this->testArray[j+1] = this->testArray[j];
            j--;
            this->steps++;
        }   
        this->testArray[j + 1] = key; 
    }

    // Printing Sorted Vector
    this->printArray();

    // Steps
    std::cout << "\nSteps:\t" << this->steps << "\n\n";
    this->steps = 0;  
};

void Sorts::mergeSort(std::vector<int> *arr, int low, int high){
    // Sorting Vector
    int mid;
    if (low < high) {
        mid = low + (high - low)/2;
        this->mergeSort(arr, low, mid);
        this->mergeSort(arr, mid+1, high);
        this->merge(arr, low, high, mid);
    }  
};

void Sorts::merge(std::vector<int> *arr, int low, int high, int mid) {
    // VARIABLES
    int i , j , k, left, right;

    left = mid - low + 1;
    right = high - mid;
    
    std::vector<int> *leftArray;
    std::vector<int> *rightArray;

    // FILLING ARRAYS
    for ( i = 0; i < left; i++) {
        leftArray[i] = arr[low+i];
    }

    for (j = 0 ; j < right; j++) {
        rightArray[j] = arr[mid+1+j];
    }

    i = 0;
    j = 0;
    k = low;

    // MERGING
    while (i < left && j < right) {
        if (leftArray[i] <= rightArray[k]) {
            arr[k] = leftArray[i];
            i++;
        }
        else {
            arr[k] = rightArray[j];
            j++; 
        }
        k++;
    }

    while (i < left) {
        arr[k] = leftArray[i];
        k++;
        i++;
    }

    while (j < right) {
        arr[k] = rightArray[j];
        k++;
        j++;
    }
}