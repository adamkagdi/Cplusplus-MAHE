#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter two numbers to be swapped" << endl;
    cin >> a;
    cin >> b;
    cout << "The value of a is "<< a <<" and the value of b is "<< b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "The value of the numbers have been swapped and now a is "<< a <<" and the value of b is "<< b << endl;
    return 0;
}
