#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

// SP21-BCS-045-ABDUL HADI

using namespace std;

int main()
{
    cout << "Registration ID: SP21-BCS-045-ABDUL HADI\n";
    string first_name, last_name;
    double gross_amount;

    ifstream input_data;
    ofstream output_data;
    // input_data.open("input.txt");
    output_data.open("Output.txt");

    cout << "\nPlease Enter Gross Amount: ";
    cin >> gross_amount;

    cin.clear();
    cin.ignore(100, '\n');

    cout << "Pleaser enter Employee Name: ";
    cin >> first_name;
    cout << "\nPleaser enter Last Name: ";
    cin >> last_name;

    double federal_income_tax = (0.15 * gross_amount);
    double state_tax = (0.035 * gross_amount);
    double social_security_tax = (0.0575 * gross_amount);
    double medicare_tax = (0.0275 * gross_amount);
    double pension_plan = (0.05 * gross_amount);
    double health_insurance = 75;

    double total_tax = (federal_income_tax + state_tax + social_security_tax + medicare_tax + pension_plan + health_insurance);
    double net_pay = (gross_amount - total_tax);

    output_data << fixed << setprecision(2) << showpoint;

    output_data << first_name << " " << last_name << endl;
    output_data << setfill('.') << left << setw(25) << "Gross Amount: "
                << setfill(' ') << " $" << setw(7) << right << gross_amount << endl;
    output_data << setfill('.') << left << setw(25) << "Federal Tax: "
                << setfill(' ') << " $" << setw(7) << right << federal_income_tax << endl;
    output_data << setfill('.') << left << setw(25) << "State Amount: "
                << setfill(' ') << " $" << setw(7) << right << state_tax << endl;

    output_data << setfill('.') << left << setw(26) << "\nSocial Security Tax: "
                << setfill(' ') << " $" << setw(7) << right << social_security_tax << endl;
    output_data << setfill('.') << left << setw(25) << "Medicare/Medicaid Tax: "
                << setfill(' ') << " $" << setw(7) << right << medicare_tax << endl;
    output_data << setfill('.') << left << setw(25) << "Pension Plan: "
                << setfill(' ') << " $" << setw(7) << right << pension_plan << endl;
    output_data << setfill('.') << left << setw(25) << "Health Insurance: "
                << setfill(' ') << " $" << setw(7) << right << health_insurance << endl;
    output_data << setfill('.') << left << setw(25) << "Net Pay: "
                << setfill(' ') << " $" << setw(7) << right << net_pay << endl;

    // input_data.close();
    output_data.close();

    return 0;
}