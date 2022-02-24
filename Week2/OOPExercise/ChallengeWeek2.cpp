#include <iostream>

using namespace std;

class Building
{
    // Attributes
protected:
    int numFloors;
    int yearBuilt;
    string type;

public:
    // Constructor
    // Building()
    Building(int numFloors = 0, int yearBuilt = 2000, string type = "Miscellaneous")
    {
        this->numFloors = numFloors;
        this->yearBuilt = yearBuilt;
        this->type = type;
    }

    // Class Functions
    void setFloors(int floors)
    {
        numFloors = floors;
    }

    void setYear(int year)
    {
        yearBuilt = year;
    }

    void setType(int type)
    {
        this->type = type;
    }

    int getFloors()
    {
        return numFloors;
    }
    int getYear()
    {
        return yearBuilt;
    }
    string getType()
    {
        return type;
    }
};

class School : public Building
{
    // Attributes
private:
    int capacity;
    int numRooms;
    bool DisableAcc;

public:
    // Constructor
    School(int numFloors, int yearBuilt, string type, int capacity, int numRooms, bool DisableAcc) : Building(numFloors, yearBuilt, type)
    {
        this->capacity = capacity;
        this->numRooms = numRooms;
        this->DisableAcc = DisableAcc;
    }

    // Class Functions
    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }

    void setRooms(int rooms)
    {
        numRooms = rooms;
    }

    void setType(bool DisableAcc)
    {
        this->DisableAcc = DisableAcc;
    }

    int getCapacity()
    {
        return capacity;
    }

    int getRooms()
    {
        return numRooms;
    }

    bool getDisableAcc()
    {
        return DisableAcc;
    }
};

int main()
{
    Building mybuilding(3, 1998, "Nursing Home");
    cout << mybuilding.getFloors() << endl
         << mybuilding.getYear() << endl
         << mybuilding.getType() << endl;
}