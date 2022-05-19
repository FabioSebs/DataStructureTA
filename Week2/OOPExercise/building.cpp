#include <iostream>
using namespace std;

class Building
{
private:
    float area;
    float length;
    float width;

public:
    Building(float MyLength = 0, float MyWidth = 0)
    {
        length = MyLength;
        width = MyWidth;
    }

    void CalculateArea()
    {
        area = width * length;
    }

    void SetWidth(float Widths)
    {
        width = Widths;
    }
    void SetLength(float Lengths)
    {
        length = Lengths;
    }
    void GetArea()
    {
        cout << "The area of the room is " << area << endl;
    }
};

class House : public Building
{
private:
    float AreaGarden;

public:
    House(float AreaGardens = 0)
    {
        AreaGarden = AreaGardens;
    }
    void AddAreaGarden(float MyArea)
    {
        AreaGarden = MyArea;
    }
    void GetAreaGarden()
    {
        cout << "The area of the garden is " << AreaGarden << endl;
    }
};

int main()
{
    House A;
    A.SetWidth(5);
    A.SetLength(5);
    A.CalculateArea();
    A.GetArea();
    A.AddAreaGarden(5);
    A.GetAreaGarden();
    return 0;
}