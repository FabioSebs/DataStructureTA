// group 7 nathan justin hansel
#include <iostream>
using namespace std;

class Monas
{
private:
    int Age;
    int height;
    string Owner;

public:
    Monas(int Age = 60, int height = 137, string Owner = "Republic of Indonesia")
    {
        this->Age = Age;
        this->height = height;
        this->Owner = Owner;
    }

    int getAge()
    {
        return Age;
    }
    int getHeight()
    {
        return height;
    }
    string getOwner()
    {
        return Owner;
    }
    void setHeight(int newHeight)
    {
        height = newHeight;
    }
    void setAge(int newage)
    {
        Age = newage;
    }
    void setOwner(string newowner)
    {
        Owner = newowner;
    }
};

class Security : public Monas
{
private:
    string securityName;
    int ID;
    int Level; // 1/2/3/4...
public:
    Security(int securityName, int ID, int Level)
    {
        this->securityName = securityName;
        this->ID = ID;
        this->Level = Level;
    }

    void setName(string newName)
    {
        securityName = newName;
    }
    void setID(int newID)
    {
        ID = newID;
    }
    void setLevel(int newLevel)
    {
        Level = newLevel;
    }

    string getName()
    {
        return securityName;
    }
    int getID()
    {
        return ID;
    }
    int getLevel()
    {
        return Level;
    }
};

int main()
{
    Monas x();
    Security y();
}