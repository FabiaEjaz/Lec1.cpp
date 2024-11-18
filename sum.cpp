#include <iostream>
using namespace std;
int num1;
int num2;
int sum;
int main()
{
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;
    sum = num1 + num2;
    cout << num1 << "+" << num2 << "=" << sum << endl;
    return 0;
}