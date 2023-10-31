#include <iostream>

using namespace std;

int main ()
{
    int x,sum,y;
    sum = 0;
    cout << "Enter a 2 digit number \n";
    cin >> x;
    sum = x/10 + x%10;
    cout << "Sum of the number is " << sum;
    return 0;
}
