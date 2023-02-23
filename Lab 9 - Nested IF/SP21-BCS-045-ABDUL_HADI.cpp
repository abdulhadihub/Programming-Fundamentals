#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

// SP21-BCS-045-ABDUL HADI
// Lab Class 9
// Date: 12th October 2021

using namespace std;

int main()
{
    cout << "SP21-BCS-045-ABDUL HADI" << endl;

    // ***************************************************************************************************************************
    // Lab Task 1

    cout << "Lab Task 1" << endl;
    int single_digit_num;
    cout << "Please enter a one-digit integer(0-9): ";
    cin >> single_digit_num;

    if (single_digit_num == 0)
    {
        cout << "Zero.\n";
    }
    else if (single_digit_num == 1)
    {
        cout << "One.\n";
    }
    else if (single_digit_num == 2)
    {
        cout << "Two.\n";
    }
    else if (single_digit_num == 3)
    {
        cout << "three.\n";
    }
    else if (single_digit_num == 4)
    {
        cout << "four.\n";
    }
    else if (single_digit_num == 5)
    {
        cout << "five.\n";
    }
    else if (single_digit_num == 6)
    {
        cout << "six.\n";
    }
    else if (single_digit_num == 7)
    {
        cout << "seven.\n";
    }
    else if (single_digit_num == 8)
    {
        cout << "Eight.\n";
    }
    else if (single_digit_num == 9)
    {
        cout << "Nine.\n";
    }
    else
    {
        cout << "Invalid number!\n";
    }

    // ***************************************************************************************************************************
    // Lab Task 2

    cout << "Lab Task 2" << endl;
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
    else
    {
        cout << "This is not a right angled triangle!\n";
    }

    // ***************************************************************************************************************************
    // Lab Task 3

    cout << "Lab Task 3\n";
    double weight_lb, height_inches, bmi;
    cout << "Please enter your weight in pounds: ";
    cin >> weight_lb;
    cout << "Please enter your height in inches: ";
    cin >> height_inches;

    bmi = ((703 * (weight_lb)) / (pow(height_inches, 2)));

    cout << "Your BMI is: " << bmi << endl;

    if (bmi >= 30)
    {
        cout << "BMI \t\tWeight Status\n";
        cout << "30.0 and above \tObese\n";
    }
    else if (bmi >= 25)
    {
        cout << "BMI \t\tWeight Status\n";
        cout << "25.0 - 29.9 \tOverweight\n";
    }
    else if (bmi >= 18.5)
    {
        cout << "BMI \t\tWeight Status\n";
        cout << "18.5 - 24.9 \tNormal\n";
    }
    else if (bmi < 18.5)
    {
        cout << "BMI \t\tWeight Status\n";
        cout << "Below 18.5 \tUnderweight\n";
    }

    return 0;
}