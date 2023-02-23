#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

// SP21-BCS-045-ABDUL Hadi

using namespace std;

int main()
{
    cout << "Registration ID: SP21-BCS-045-ABDUL Hadi\n";

    double length, width, radius, account_balance, interest_rate;
    string first_name, last_name;
    int age;
    char letter;
    const double pi = 3.1416;
    // double end_balance = (account_balance + interest_rate);

    ifstream input_data;
    ofstream output_data;

    input_data.open("inData.txt");
    output_data.open("outData.txt");

    input_data >> length >> width >> radius >> first_name >> last_name >> age >> account_balance >> interest_rate >> letter;
    output_data << fixed << setprecision(2) << showpoint;

    cout << "Processing Data...\n";

    double area = length * width;
    double perimeter = ((length * 2) + (width * 2));
    double circle_area = (pi * radius * radius);
    double circumference = (2 * pi * radius);

    output_data << "Rectangle:\n";
    output_data << "Length = " << length << ", Width =  " << width << ", Area = " << area << ", parameter = " << perimeter << endl;
    output_data << "\nCircle:\n";
    output_data << "Radius = " << radius << ", Area = " << circle_area << ", Circumference = " << circumference << endl;
    output_data << "\n";
    output_data << "\nName: " << first_name << " " << last_name << ", Age: " << age << endl;
    output_data << "Beginning balance = $" << account_balance << ", interest rate = " << interest_rate << endl;
    output_data << "Balance at the end of the month = $" << account_balance + interest_rate << endl;
    output_data << "\n";
    output_data << "The character  that comes after " << letter << " in the ASCII set is " << static_cast<char>((1 + static_cast<int>(letter))) << endl;

    input_data.close();
    output_data.close();
    return 0;
}