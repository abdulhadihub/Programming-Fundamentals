#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int side_1;
    int side_2;
    int side_3;

    cout << "Please enter the value of the three sides of a triangle: ";
    cin >> side_1 >> side_2 >> side_3;

    if (side_1 == sqrt(pow(side_2, 2) + pow(side_3, 2)))
    {
        cout << "This triangle is a right angled triangle\n";
    }
    else if (side_2 == sqrt(pow(side_3, 2) + pow(side_1, 2)))
    {
        cout << "This triangle is a right angled triangle\n";
    }
    else if (side_3 == sqrt(pow(side_1, 2) + pow(side_2, 2)))
    {
        cout << "This triangle is a right angled triangle\n";
    }
    else if ((side_1 == side_2) || (side_2 == side_3) || (side_3 == side_1))
    {
        if ((side_1 == side_2) && (side_2 == side_3))
        {
            cout << "This is an equilateral triangle\n";
        }
        else
        {
            cout << "This is an isoceles triangle\n";
        }
    }
    else
    {
        cout << "This is neither an Isoceles, nor a right angled nor an equilateral triangle triangle!\n";
    }
    return 0;
}