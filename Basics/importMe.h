#include <iostream>
#include <string>

using namespace std;

namespace vehicle
{
    class Car
    {
    private:
        string brand;
        int maxSpeed;
        string color;

    public:
        string getBrand()
        {
            return brand;
        }

        int getMaxSpeed()
        {
            return maxSpeed;
        }

        string getColor()
        {
            return color;
        }

        void setBrand(string input)
        {
            brand = input;
        }

        void setMaxSpeed(int input)
        {
            maxSpeed = input;
        }

        void setColor(string input)
        {
            color = input;
        }
    };
}