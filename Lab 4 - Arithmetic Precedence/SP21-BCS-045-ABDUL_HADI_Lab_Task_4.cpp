#include <iostream>

using namespace std;

// NAME: SP21-BCS-045-ABDUL HADI
// LAB TASK: 4.2

// ALGORITHM
// 1. declare m and n as variables
// 2. display output of m and n values
// 3. declare formula of side1, side2, and hypotenuse with respect to m and n
// 4. display output formula of side1, side2, and hypotenuse with respect to m and n
// 5. display output the sides of the pythagorean triple

int main()
{
    cout << "SP21-BCS-045-ABDUL HADI" << endl;
    cout << "Lab Task 4.2\n" << endl;

    int m = 2;
    int n = 1;

    cout << "The value of m is: " << m << endl;
    cout << "The value of n is: " << n << endl;

    int side1 = ((m * m) - (n * n));
    int side2 = 2 * m * n;
    int hypotenuse = ((m * m) + (n * n));

    // cout << "side1 = ((m*m) - (n*n))" << endl;
    // cout << "side2 = 2*m*n" << endl;
    // cout << "hypotenuse = ((m*m) + (n*n))" << endl;

    cout << "\nValue of Side 1 is: " << side1 << endl;
    cout << "Value of Side 2 is: " << side2 << endl;
    cout << "Value of Hypotenuse is: " << hypotenuse << endl;
    return 0;
}
