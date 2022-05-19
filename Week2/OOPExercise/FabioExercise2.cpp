/*
Data Structures Lab
L2BC Group 2
Joshua, Kimberly, Maria
*/

#include <iostream>
#include <string>
using namespace std;

// PARENT CLASS
class Buildings
{
private:
    // CLASS PROPERTIES
    int floors;
    float height;
    int parking_capacity;
    float area;

public:
    // DEFAULT CONSTRUCTOR
    // Buildings() : floors(0), height(0), parking_capacity(0), area(0){};

    // CUSTOM CONSTRUCTOR
    Buildings(int myfloor = 0, float myheight = 0, int myparking = 0, float myarea = 0)
    {
        floors = myfloor;
        height = myheight;
        parking_capacity = myparking;
        area = myarea;
    }

    // SETTERS
    void setFloors(int floornum)
    {
        floors = floornum;
    }

    void setHeight(float buildheight)
    {
        height = buildheight;
    }

    void setParking(int parking)
    {
        parking_capacity = parking;
    }

    void setArea(float buildarea)
    {
        area = buildarea;
    }

    // GETTERS
    void getFloors()
    {
        cout << "Floors: " << floors << endl;
    }

    void getHeight()
    {
        cout << "Height: " << height << endl;
    }

    void getParking()
    {
        cout << "Parking Capacity : " << parking_capacity << endl;
    }

    void getArea()
    {
        cout << "Area : " << area << endl;
    }
};

// CHILD CLASS - House
class House : public Buildings
{
private:
    int bedrooms;
    float bathrooms;
    int human_capacity;

public:
    // CONSTRUCTOR
    // House() : Buildings::floors(0), Buildings::height(0), Buildings::parking_capacity(0), Buildings::area(0), bedrooms(0), bathrooms(0), human_capacity(0){};
    House(int myfloor, float myheight, int myparking, float myarea, int mybedrooms = 0, float mybathrooms = 0, int myhuman_capacity = 0)
    {
        bedrooms = mybedrooms;
        bathrooms = mybathrooms;
        human_capacity = myhuman_capacity;
    };

    // SETTERS
    void setBedrooms(int mybedrooms)
    {
        bedrooms = mybedrooms;
    }
    void setBathrooms(int mybathrooms)
    {
        bathrooms = mybathrooms;
    }
    void setHumanCapacity(int myhuman_capacity)
    {
        human_capacity = myhuman_capacity;
    }

    // GETTERS
    void getBedrooms()
    {
        cout << "Bedrooms : " << bedrooms << endl;
    };
    void getBathrooms()
    {
        cout << "Bathrooms : " << bathrooms << endl;
    };
    void getHumanCapacity()
    {
        cout << "Human Capacity : " << human_capacity << endl;
    };
};

// CHILD CLASS - Mall
class Mall : public Buildings
{
private:
    int cinema_theatres;
    int stores;
    string location;

public:
    // CONSTRUCTOR
    Mall(int myfloor, float myheight, int myparking, float myarea, int mycinema_theatres = 0, int mystores = 0, string mylocation = "None")
    {
        cinema_theatres = mycinema_theatres;
        stores = mystores;
        location = mylocation;
    };

    // SETTERS
    void setCinema(int cinema)
    {
        cinema_theatres = cinema;
    }

    void setStores(int storenum)
    {
        stores = storenum;
    }

    void setLocation(string locate)
    {
        location = locate;
    }

    // GETTERS
    void getCinema()
    {
        cout << "Cinema Theatres: " << cinema_theatres << endl;
    }

    void getStores()
    {
        cout << "Stores: " << stores << endl;
    }

    void getLocation()
    {
        cout << "Location: " << location << endl;
    }
};

int main()
{
    Buildings sample(2, 10, 4000, 1400);
    sample.getFloors();
    sample.getHeight();
    sample.getParking();
    sample.getArea();

    House myhouse1(2, 12, 3, 200, 4, 5, 8);
    myhouse1.getBathrooms();
    myhouse1.getBedrooms();
    myhouse1.getHumanCapacity();

    Mall mymall1(5, 25, 100, 5000, 4, 70, "Jakarta");
    mymall1.getCinema();
    mymall1.getStores();
    mymall1.getLocation();

    return 0;
};