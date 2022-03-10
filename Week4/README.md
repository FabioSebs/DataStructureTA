# WEEK 4

### Recursion

Recursion is the act of calling a function within the same function. Overall recursion is less efficient than for loops because it uses more memory and increases the call stack by a lot. The reason why it is powerful is because when used correctly , recursion can reduce the search space by half every iteration. This is when the efficiency of recursion compensates for the memory overhead, BUT thats **only** when the search space (n) is reduced otherwise it's better to use loops.

### Call Stack

Lets understand what a stack is. A stack is a linear data structure that follows a LIFO (Last In First Out) rule of insertion/retrieval. On the other hand we have a Queue which is a linear data structure as well that follows a FILO (First In Last Out) rule of insertion/retrieval. The Call Stack is a mechanism for a program to keep track of the functions that are being invoked from your function. If the stack exceeds the maximum memory it's designated to have then we have a stack overflow which is common when recursion is done ineffectively.

### Dynamic Programming (Memoization)

Dynamic Programming is a style of programming that is used to solve problems in an efficient way. The best way recursion problems are optimized is by Memoization!

### When to use Recursion

- Linear Data Structure = HAS TO BE SORTED!

- Binary Trees / Heirarchical Data Structures

### Vector VS Array - Differences?

Array for storing **fixed** number of elements in an object.

Vector for dynamically storing number of elements in an object.

### Exercise

Write 3 Facts on Three Topics of what we have learned so far!

- Big O

1. The slowest order of Big O is O(n!)
2. Big O is named after the Order of the function
3. A constant function with O(1) is the fastest order a function can have
4. Big O can be used to describe the execution time required or the space used by an algorithm.
5. Big O(1) → Constant Time
   Big O(n) → Linear Time
   Big O(n²) → Quadratic Time

- Compiled Languages

1. Java is the most popular compiled programming language
2. C++ is the 3rd most popular compiled programming language
3. C++ was released in 1985

- Whatever Data Structure You Want!
  Facts about Arrays:

1. Arrays are mutable
2. Arrays can contain any data type !Only in interpreted languages
3. Arrays start at index 0
   Data Structure :

- Characteristics = Correctness, Time Complexity, and Space Complexity
- Types = Linear and Non-Linear
- Objective = to store and retrieve the data in effectively and efficiently
