# Basics of C++

This part of the repo will breakdown all of the confusing and new things that you will see in C++ that may trip you up. Let's begin!

---

## Include, Headers, and Namespaces

All right guys to start lets understand how we import libraries to our programs. Everyone knows if youre just coding barebones without any libraries to use its no fun. So lets understand how we can do that using the built in standard libraries that C++ provides you.

> ### Include Statement and Headers

> The **include** keyword is used to import libraries and header files that you can use to import all the useful functions and classes you want to use in your program. What is a headerfile??? A headerfile is a way to declare the classes and functions that an imported library will contain. All of these classes and functions are encapsulated by a namespace. Lets see what a namespace is.

> ### Namespace

> **Namespaces** as the last definition kind of touches on is a way to bundle your classes and functions within it's own space/scope. This is done within a headerfile but can also be used outside of headerfiles and we will demo that later.

---

## Structs VS Classes

In C++ there is the **class** keyword and the **struct** keyword, so which one to use? The difference is very miniscule but the main difference is that struct by default has the properties and functions it encapusulates to be public. class on the other hand has them to be private. Other differences involve the way memory is allocated and the data type they are instantiated as but dont stress it too much about the differences.

---

## Pointers and References

This will throw a lot of people off but don't worry thats why I am here. In C++ im sure you guys have seen the **\*** and the **&** keyword used on a variable name for instance or a parameter within a function. The star is called the "pointer" operator and the ampersand is called the "address of" operator or people refer to them as reference of also. What are they and why to use them?

So we know that C++ is low level right. Well the perks of working in low level is that we get to work closer with the memory allocation of our program! Python and Javascript do it for you but in C++ you can do it yourself to make your program a lot more efficient in terms of memory use.

To understand how this works is hard through reading, instead we will show how they work with a demo in class. If you guys want to do your research look up "Pass by Value vs Pass by Reference" to have a clearer understanding on how to use pointers and references.

We will demo how to use these operators and make sure you see how theyre used in the wild so reading other people's code wont trip you up.

## New and Delete

To understand the **new** and **delete** we have to understand **C++ Dynamic Memory**. So memory in C++ is divided into two parts

- The Stack - all variables declared inside the function will take up memory from the stack which is not at runtime. This means all the memory in your program is already set and stone when you compile it.

- The Heap - this is unused memory of the program and can be used to allocate the memory dynamically when program runs. So during runtime you can get memory allocated from a user input for example, where the input is undetermined.

The **new** keyword is usually not the recommended way to make an object. Since when you use this keyword you have to free up the dynamic memory allocated by your program using the **delete** keyword. We will go over this in a session but it's good to keep note that the **new** keyword is to create an object using **The Heap** for dynamic allocation purposes. The **delete** keyword is used to free up that space and make sure its not left hanging.

## Syntax

The syntax of C++ is actually quite similar to most statically typed and compiled languages but if a programmer only has experience in Python it can be quite a hard transition. Lets just show them all on display with a code snippet.

```c++
// VARIABLES
#include <iostream>

using namespace std;

int main()
{
    // Numerical Variables **Signed and Unsigned**
    int a = 5;
    short b = 5;    // Takes less memory in bytes
    long c = 5;     // Takes more memory in bytes
    double d = 5.0; // Decimals
    float e = 5.0;

    // Non Numerical Variables
    char myChar = 'a';
    char myString[6] = {'h', 'e', 'l', 'l', 'o'};
    string myBetterString = "hello";

    // Immutable aka Constants
    const int f = 5;
    const char e = 'e';

    return 0;
}
```

## Built-In Data Structures (Arrays VS Maps)

So now lets go over the built in data structures in C++, lets begin with an Array. You gus may now this as a List in Python but in C++ it acts a little different. An array takes up its own space in memory where all the values have addresses that are right next to each other. This means it can be accessed very fast since the computer doesn't have to do much searching. Pretty cool its a nice way for data to be stored. Compared to Python though a list doesn't behave the same way. The elements in a list can be scattered random places in memory and is less efficient but more flexible since it accepts many data types. In C++ an array can only hold specific data types so you have to declare what type of array it is. Will it be an array holding all strings? An array with all ints? Thats all up to you and you have the power to declare it. The last important thing is that an Array actually has a fixed length that you have to determine for it and cannot be changed later on in the program. Here lets have another code snippet that should clear things up.

> ### Making Arrays

```c++
#include <iostream>
#include <array>

using namespace std;

int main()
{
    // Making an Array
    int myIntArray[5] = {1, 2, 3, 4, 5};
    string myStringArray[2] = {"Hello", "World!"};
    char myCharArray[5] = {'H', 'E', 'L', 'L', 'O'};
}
```

> ### Size of an Array

```c++

int main(){
    //  What if we dont know the size of the array we want? Just leave bracket empty :D
    int myUnpredictableArray[] = {1, 2, 3, 4, 5, 6, 7};

    //  What if we want to get the size from a user input??
    int input;
    cout << "Enter Array Size - ";
    cin >> input;
    int myUserInputArray[input] = {};

    // Check Size - Eh not the cleanest way right??
    cout << "Size: " << sizeof(myUserInputArray) / sizeof(myUserInputArray[0]) << endl;
}
```

> ### Array Class Template

```c++
int main(){
    // Instead of Declaring Arrays the old way lets use another useful method using the Array Class Template
    array<int, 5> myCoolerArray = {4, 3, 7, 1, 3};
    cout << "Size of myCoolerArray - " << myCoolerArray.size() << endl;
}
```

> ### Traversing through Array

```c++
int main(){
    //  What if we want to go through the array?? For Loop is king
    for (int i = 0; i < myCoolerArray.size(); i++)
    {
        cout << myCoolerArray[i] << " " << endl;
    }

    // Cleaner Way of Traversing
    for (const auto &val : myCoolerArray)
    {
        cout << val << endl;
    }
}
```

> ### Removing and Adding to Array

```c++
int main() {

}
```

> ### Adding and Removing from Array

Well there is no effective way to remove and add to an array. Dynamically adding to an array is possible and we will demo that but removing from an array is tedious and actually not worth the implementation. Instead if these functionalities is something you desire and are willing to sacrific efficiency then youll want to use **vectors**.

> ### Vectors!

First what is the difference between Vectors and Arrays?

- Vectors is sequential just like arrays but the elements are not contiguous meaning they are NOT next to each other they are living **scattered** in memory.

- Vectors are dynamic so as you insert into a vector the size will increase automatically.

- Vectors occupy more memory and take more time in accessing elements.

> ### Removing From Vector

Since we are using vectors we can simply use the pop_back() function to remove the last element in the vector. There is additionally another function called erase() that we can use.

```c++
void displayArray(vector<int> example)
{
    for (const auto &val : example)
    {
        cout << val << endl;
    }
}

int main()
{
    vector<int> myVector = {1, 2, 3, 4, 5};

    myVector.pop_back();

    displayArray(myVector); // 1, 2, 3, 4
}
```
