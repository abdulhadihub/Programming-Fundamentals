#include <iostream>

using namespace std;

int main()
{
    // Values = 37 86.56 32
    int x;
    int y;
    double z;

    // Input values in this order = "5.56 86 37"
    cin >> x >> y >> z;
    cout << "Part A" << endl;
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
    cout << "The value of z is: " << z << endl;
    //     INPUT
    //     5.56 86 37

    //     OUTPUT
    //     Part A
    // The value of x is: 5
    // The value of y is: 0
    // The value of z is: 1.79174e-307

    // cin >> x >> z >> y;
    // cout << "Part B" << endl;
    // cout << "The value of x is: " << x << endl;
    // cout << "The value of y is: " << y << endl;
    // cout << "The value of z is: " << z << endl;

    // cin >> z >> x >> y;
    // cout << "Part C" << endl;
    // cout << "The value of x is: " << x << endl;
    // cout << "The value of y is: " << y << endl;
    // cout << "The value of z is: " << z << endl;
    return 0;
}