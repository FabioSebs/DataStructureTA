#include <iostream>
//#include "OOPexerciseh.hpp"

using namespace std;

class Building{
        public:
            int floors;
            int year;
            double height;
            
            Building(){};
            Building(int x, int y, int z) : floors(x), year(y), height(z) {};

            void setFloors(int newfloors){
                this->floors = newfloors;
            };

            int getFloors(){
                return this->floors;
            };

            void setYear(int newyear){
                this->year = newyear;
            };

            int getYear(){
                return this->year;
            };

            void setHeight(double newheight){
                this->height = newheight;
            };

            double getHeight(){
                return this->height;
            };
};

class House : public Building {
    public:
        double area;
        int doors;
        string type;
            
        House(){};
        House(double i, int j, string k) : area(i), doors(j), type(k) {};

        void setArea(double newarea){
            this->area = newarea;
        };

        int getArea(){
            return this->area;
        };

        void setDoors(int newdoors){
            this->doors = newdoors;
        };

        int getDoors(){
            return this->doors;
        };

        void setType(string newtype){
            this->type = newtype;
        };

        string getType(){
            return this->type;
        };
            
};
int main(){
    House myHouse(200, 3, "Normal");
    cout << "Area of house is " << myHouse.getArea() << " m2" << endl;
    cout << "No. of doors is " << myHouse.getDoors() << endl;
    cout <<"Type of house is " << myHouse.getType() << endl;
    myHouse.setHeight(15);
    myHouse.setYear(2018);
    myHouse.setFloors(2);
    cout << "Height of house is " << myHouse.getHeight() << " m" << endl;
    cout <<"Year of building constructed is " << myHouse.getYear() << endl;
    cout << "No. of floors in house is " << myHouse.getFloors() << endl;
};