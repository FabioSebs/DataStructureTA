#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(){};
    Person(string x, int y) : name(x), age(y){};
    Person(string &name)
    {
        this->name = name;
        this->age = 0;
    };

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    };
};

int randNumber(int limit)
{
    srand((unsigned)time(0));
    int i = (rand() % limit) + 1;
    return i;
}

int main()
{
    Person myClass[30];
    int size = 0;

    // INPUTTING INTO AN ARRAY
    for (int i = 0; i < 30; i++)
    {
        string name;
        cout << "Enter a name: " << endl;
        cin >> name;
        if (name != "exit")
        {
            myClass[i].setName(name);
            size++;
        }
        else
        {
            break;
        }
    }

    // DISPLAYING ARRAY
    cout << endl;
    for (Person i : myClass)
    {
        cout << i.getName() << "\t";
    };

    // RANDOM PERSON FROM ARRAY
    int breakConditional;
    cout << endl
         << "\n ENTER AN INT TO GENERATE A RANDOM NAME FROM CLASS \n"
         << endl;

    while (cin >> breakConditional)
    {
        int rand = randNumber(size);
        cout << "\n"
             << myClass[rand].getName() << "\n";
    };
}
