#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int num, tens, units;
    string tens_place, units_place;
    cout << "Please enter an integer(0-99): ";
    cin >> num;
    tens = num / 10;
    units = num % 10;

    if (num < 10)
    {
        if (units == 0)
        {
            units_place = "Zero";
        }
        else if (units == 1)
        {
            units_place = "one\n";
        }
        else if (units == 2)
        {
            units_place = "two\n";
        }
        else if (units == 3)
        {
            units_place = "three\n";
        }
        else if (units == 4)
        {
            units_place = "four\n";
        }
        else if (units == 5)
        {
            units_place = "five\n";
        }
        else if (units == 6)
        {
            units_place = "six\n";
        }
        else if (units == 7)
        {
            units_place = "seven\n";
        }
        else if (units == 8)
        {
            units_place = "eighth\n";
        }
        else if (units == 9)
        {
            units_place = "nine\n";
        }
    }
    else if ((num > 9) && (num < 20))
    {
        tens_place = "";
        units_place = "";
        if (num == 10)
        {
            cout << "Ten.\n";
        }
        else if (num == 11)
        {
            cout << "eleven\n";
        }
        else if (num == 12)
        {
            cout << "twelve\n";
        }
        else if (num == 13)
        {
            cout << "thirteen\n";
        }
        else if (num == 14)
        {
            cout << "fourteen\n";
        }
        else if (num == 15)
        {
            cout << "fifteen\n";
        }
        else if (num == 16)
        {
            cout << "sixteen\n";
        }
        else if (num == 17)
        {
            cout << "seventeen\n";
        }
        else if (num == 18)
        {
            cout << "eighteen\n";
        }
        else if (num == 19)
        {
            cout << "nineteen\n";
        }
    }
    else if ((num > 19) && (num < 100))
    {
        if (tens == 2)
        {
            tens_place = "twenty";
        }
        else if (tens == 3)
        {
            tens_place = "thirty";
        }
        else if (tens == 4)
        {
            tens_place = "fourty";
        }
        else if (tens == 5)
        {
            tens_place = "fifty";
        }
        else if (tens == 6)
        {
            tens_place = "sixty";
        }
        else if (tens == 7)
        {
            tens_place = "seventy";
        }
        else if (tens == 8)
        {
            tens_place = "eighty";
        }
        else if (tens == 9)
        {
            tens_place = "ninety";
        }
        {
            if (units == 0)
            {
                units_place = "";
            }
            else if (units == 1)
            {
                units_place = "one\n";
            }
            else if (units == 2)
            {
                units_place = "two\n";
            }
            else if (units == 3)
            {
                units_place = "three\n";
            }
            else if (units == 4)
            {
                units_place = "four\n";
            }
            else if (units == 5)
            {
                units_place = "five\n";
            }
            else if (units == 6)
            {
                units_place = "six\n";
            }
            else if (units == 7)
            {
                units_place = "seven\n";
            }
            else if (units == 8)
            {
                units_place = "eighth\n";
            }
            else if (units == 9)
            {
                units_place = "nine\n";
            }
        }
    }
    else
    {
        cout << "Invalid number!\n";
    }
    cout << num << " in words is: " << tens_place << " " << units_place;
    return 0;
}