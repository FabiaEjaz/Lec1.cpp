#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks:" << endl;
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "Congratulations! You passed." << endl;
    }
    else if (marks >= 50 && marks < 90)
    {
        cout << "You passed." << endl;
    }
    else if (marks >= 0 && marks < 50)
    {
        cout << "You failed." << endl;
    }
    else
    {
        cout << "You entered invalid marks." << endl;
    }

    return 0;
}