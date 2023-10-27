#include <iostream>

using namespace std;

int main()
{
    float f,c;
    cout << "What is the Fahrenheit temperature?" << endl;
    cin >> f;
    c = (f-32)*5/9;
    cout << "The temperature in Celsius is " << c << endl;
    return 0;
}
