#include <iostream>

using namespace std;

class Building
{
private:
    float height;
    int occupancy;
    int floors;

public:
    Building(float height = 0.0, int occupancy = 0, int floors = 0)
    {
        this->height = height;
        this->occupancy = occupancy;
        this->floors = floors;
    }

    void setHeight(float height)
    {
        this->height = height;
    }

    void setOccupancy(int occupancy)
    {
        this->occupancy = occupancy;
    }

    void setFloors(int floors)
    {
        this->floors = floors;
    }

    float getHeight()
    {
        return this->height;
    }

    int getOccupancy()
    {
        return this->occupancy;
    }

    int getFloors()
    {
        return this->floors;
    }
};

class Burj : public Building
{
private:
    float height;
    int occupancy;
    int floors;

public:
    Burj(float height = 829.8, int occupancy = 10000, int floors = 163)
    {
        this->height = height;
        this->occupancy = occupancy;
        this->floors = floors;
    }

    ~Burj(void)
    {
        cout << "Hello I'm a Burj Khalifa" << endl;
    }

    void setHeight(float height)
    {
        this->height = height;
    }

    void setOccupancy(int occupancy)
    {
        this->occupancy = occupancy;
    }

    void setFloors(int floors)
    {
        this->floors = floors;
    }

    float getHeight()
    {
        return this->height;
    }

    int getOccupancy()
    {
        return this->occupancy;
    }

    int getFloors()
    {
        return this->floors;
    }
};

int main()
{
    Building apart;
    cout << apart.getHeight() << endl;
    cout << apart.getFloors() << endl;
    cout << apart.getOccupancy() << endl;
    cout << "=======================================================" << endl;
    apart.setHeight(20.3);
    apart.setFloors(2);
    apart.setOccupancy(500);
    cout << "This Building's height is " << apart.getHeight() << " meters" << endl;
    cout << "This Building has " << apart.getFloors() << " Floors" << endl;
    cout << "This Building max capacity is " << apart.getOccupancy() << " Persons" << endl;
    cout << "=======================================================" << endl;

    Burj burj;
    cout << "This Building's height is " << burj.getHeight() << " meters" << endl;
    cout << "This Building has " << burj.getFloors() << " Floors" << endl;
    cout << "This Building max capacity is " << burj.getOccupancy() << " Persons" << endl;
}