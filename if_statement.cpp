#include <iostream>
using namespace std;
int age;
int main()
{
    cout << "Enter your age:" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "yes,you can drive the car" << endl;
    }
    if (age < 18)
    {
        cout << "No,you cannot drive the car" << endl;
        return 0;
    }
}
