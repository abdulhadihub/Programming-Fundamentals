#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

// SP21-BCS-045(A)-ABDUL HADI.
// Program: Balance Statement
// This program calculates and prints a customer's balance statement based on their account
// type, current balance and minimum balance.

using namespace std;

int main()
{
    cout << "SP21-BCS-045(A)-ABDUL HADI" << endl;

    //Variable Declaration
    int account_number;
    char account_code;
    double current_balance, minimum_balance, new_balance, interest_value;

    // String Variables for Conditional Output statements
    string account_type, rate_in_words, message_1, message_2, operator_string, min_balance_fail_message, service_charges_string;

    //BOOL Variable to manage output statment
    // for when there is a service charge in the condition
    // that current balance is below minimum balance
    bool min_balance_not_fail = 1;

    // Named Constants - Rates & Service Charges
    const double savings_service_charge = 10, checking_service_charge = 25, savings_interest = 0.04, checking_interest_min = 0.03, checking_interest_max = 0.05;

    ifstream input_data; // step 1
    ofstream output_data;
    input_data.open("account_info.txt");
    output_data.open("balance.txt");

    output_data << fixed << showpoint << setprecision(2); // b

    input_data >> account_number; // step 2
    if (!input_data)              // step 3
    {
        cout << "Error in reading account number! Please try again." << endl;
        return 0;
    }
    else
    {
        cout << "Data has been read succesfully\nAccount Number: " << account_number << endl; // step 4
        cout << "Data is being processed...";
    }

    input_data >> account_code >> minimum_balance >> current_balance; // step 5

    switch (account_code) // step 6
    {
    case 'S': // step 6 a
        account_type = "Savings";
        if (current_balance >= minimum_balance) // step 6 b
        {
            interest_value = current_balance * savings_interest;
            new_balance = current_balance + interest_value; // step 6 c
            min_balance_fail_message = "";
            rate_in_words = "4%";
            message_1 = "You received interest";
            message_2 = "Current Balance"; // step 6 d
            operator_string = "+";
        }
        else
        {
            new_balance = current_balance - savings_service_charge; // step 6 c
            min_balance_fail_message = "You failed to maintain minimum balance.\n";
            message_1 = "Your service charges"; // step 6 d
            message_2 = "Current Balance";
            operator_string = "-";
            service_charges_string = "10.00";
            min_balance_not_fail = 0;
        }
        break;

    case 'C': // step 7
        account_type = "Checking";
        if (current_balance >= minimum_balance) // step 7 a
        {
            if (current_balance > (minimum_balance + 5000)) // step 7 b
            {
                interest_value = current_balance * checking_interest_max;
                new_balance = current_balance + interest_value; // step 7 c
                rate_in_words = "5%";
                message_1 = "You received interest"; // step 7 d
                message_2 = "Current Balance";
                operator_string = "+";
            }
            else
            {
                interest_value = current_balance * checking_interest_min;
                new_balance = current_balance + interest_value;
                rate_in_words = "3%";
                message_1 = "You received interest";
                message_2 = "Current Balance";
                operator_string = "+";
            }
        }
        else
        {
            new_balance = current_balance - checking_service_charge; // step 7 c
            min_balance_fail_message = "You failed to maintain minimum balance.\n";
            message_1 = "Your service charges"; // step 7 d
            message_2 = "Current Balance";
            operator_string = "-";
            service_charges_string = "25.00";
            min_balance_not_fail = 0;
        }
        break;
    default:
        cout << "Account type is invalid! Please try again." << endl; // step 8
        break;
    }

    if (min_balance_not_fail == 1) // step 9
    {
        output_data << setw(30) << left << "Account Number:" << right << account_number << endl;
        output_data << setw(30) << left << "Account Type:" << right << account_type << endl;
        output_data << "Message:\n";
        output_data << setw(23) << left << message_1 << setw(4) << right << "=" << setw(8) << "$" << setw(11) << interest_value << setw(6) << "@" << rate_in_words << endl;
        output_data << setw(23) << left << message_2 << setw(4) << right << "=" << setw(8) << "$" << setw(11) << new_balance << setw(6) << "[" << current_balance << "$ " << operator_string << " " << interest_value << "$]" << endl;
    }
    else
    {
        output_data << setw(30) << left << "Account Number:" << right << account_number << endl;
        output_data << setw(30) << left << "Account Type:" << right << account_type << endl;
        output_data << "Message:\n";
        output_data << min_balance_fail_message;
        output_data << setw(23) << left << message_1 << setw(4) << right << "=" << setw(8) << "$" << setw(11) << service_charges_string << endl;
        output_data << setw(23) << left << message_2 << setw(4) << right << "=" << setw(8) << "$" << setw(11) << new_balance << setw(6) << "[" << current_balance << "$ " << operator_string << " " << service_charges_string << "$]" << endl;
    }

    input_data.close(); // step 10
    output_data.close();
    cout << "\nProcessing completed successfully. Please check balance file for your Balance Statement.";

    return 0;
}
