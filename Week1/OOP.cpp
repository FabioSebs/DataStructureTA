#include <iostream>
using namespace std;

// ENCAPSULATION PARENT CLASS
class Person
{
    // ACCESS MODIFIERS - PUBLIC / PRIVATE / PROTECTED
public:
    // PROPERTIES
    float height;
    int age;

    Person() {}
    Person(float x, int y) : height(x), age(y) {}

    void introduce()
    {
        cout << "I am a Person!" << endl;
    }
};

// CHILD CLASS
class Coder : public Person
{
public:
    // OVER-RIDING
    void introduce()
    {
        cout << "I am a Coder!" << endl;
    }

    Coder() {}
};

// CHILD CLASS
class Worker : public Person
{
public:
    // OVER-RIDING
    void introduce()
    {
        cout << "I am a Worker!" << endl;
    }

    Worker() {}
};

int main()
{
    // OBJECT CREATION
    Coder fabio;
    Person justin;
    Worker hansel;
    justin.introduce();
    fabio.introduce();
    hansel.introduce();
}