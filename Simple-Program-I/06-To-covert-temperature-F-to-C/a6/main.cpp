#include <iostream>

using namespace std;

int main()
{
    float f,c;
    cout << "What is the Farenheit temperature?" << endl;
    cin >> f;
    c = (f-32)*5/9;
    cout << c;
    return 0;
}
