#include <iostream>
using namespace std;

class Bake
{

public:
    int Boys1;
    int Boys2;

protected:
    int Girls1;
    int Girls2;

public:
    int GCakes1;
    int GCakes2;
    int BCakes1;
    int BCakes2;

protected:
    int totalBoys;
    int totalGirls;
    int totalGCakes;
    int totalBCakes;
};

class BakeSale : public Bake
{
public:
    void Baking()
    {

        cout << "Please enter the Number of the First Boy Group: ";
        cin >> Boys1;

        cout << "\nPlease enter the number of the Second Boy Group: ";
        cin >> Boys2;

        cout << "\nPlease enter the number of the first Girl Group: ";
        cin >> Girls1;

        cout << "\nPlease enter the number of the Second Girl Group: ";
        cin >> Girls2;

        cout << "\nPlease enter the amount of Cupcakes sold by the First Boy Group: ";
        cin >> BCakes1;

        cout << "\nPlease enter the amount of Cupcakes sold by the Second Boy Group: ";
        cin >> BCakes2;

        cout << "\nPlease enter the amount of Cupcakes sold by First Girl Group: ";
        cin >> GCakes1;

        cout << "\nPlease enter the amount of Cupcakes sold by Second Girl Group: ";
        cin >> GCakes2;

        totalBoys = Boys1 + Boys2;
        totalGirls = Girls1 + Girls2;
        totalBCakes = BCakes1 + BCakes2;
        totalGCakes = GCakes1 + GCakes2;

         cout << "\nThere were " << totalBoys << " boys at the Bake Sale" << endl;
        cout << "\nThere were " << totalGirls << " girls at the Bake Sale" << endl;

        cout << "\nThe boys sold " << totalBCakes << " Cupcakes!" << endl;
        cout << "\nThe girls sold " << totalGirls << " Cupcakes!" << endl;
       

        if (totalGCakes > totalBCakes)
        {
            cout << "\nGirls rule! We Sold " << totalGCakes << " Cupcakes!";
        }
        else if (totalBCakes > totalGCakes)
        {
            cout << "\nTun up!! We sold" << totalBCakes << " Cupcakes!";
        }
    }
};

int main()
{

    BakeSale obj;
    obj.Baking();
    return 0;
}