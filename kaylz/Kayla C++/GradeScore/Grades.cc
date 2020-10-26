#include <iostream>
using namespace std;

class Grades
{
public:
    int Score;
};

class Grading : public Grades
{
public:
    void test()
    {
        cout << "Input a Score please: ";
        cin >> Score;

        if (Score > 100)
        {
            cout << "Please enter a score within 100. Invali Data has been entered." << endl;
        }
        else if (Score == 100)
        {
            cout << "You have a perfect Score. You passed!" << endl;
        }
        else if (Score >= 90)
        {
            cout << 'You have scored an A, Congrats!' << endl;
        }
        else if (Score >= 85)
        {
            cout << 'You have an A-, Good job' << endl;
        }
        else if (Score == 60)
        {
            cout << "You have to work harder next time." << endl;
        }
        else
        {
            cout << "You fail" << endl;
        }
    }
};
int main()
{
    Grading obj;
    obj.test();
    return 0;
}
