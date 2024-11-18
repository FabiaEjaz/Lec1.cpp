#include <iostream>
using namespace std;
int a;
int b;
int result;
int main()
{
    cout << "Enter First Number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    result = a * b;
    cout << a << "*" << b << "=" << result << endl;
    return 0;
}