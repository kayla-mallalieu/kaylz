//Author Kayla Mallalieu
#include <iostream>
using namespace std;

class Area
{

public:
    float PI = 3.14;

protected:
    float Radius = 0;

public:
    int area;
};

class Calculation : public Area
{
public:
    void calcs()
    {
        cout << "Please enter a radius: ";
        cin >> Radius;

        area = PI * (Radius * Radius);

        cout << "The Area of a circle is " << area;
    }
};

int main()
{

    Calculation obj;
    obj.calcs();
    return 0;
}