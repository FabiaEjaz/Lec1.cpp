#include <iostream>
using namespace std;
int main()
{
    int integer;
    cout << "Enter the integer:" << endl;
    cin >> integer;
    if (integer > 0)
    {
        cout << "The number is positive integer" << endl;
    }
    else{  
            cout << "The number is negative or equal to zero" << endl;
    }
    return 0;
}