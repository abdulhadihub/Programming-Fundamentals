#include <iostream>

using namespace std;

int main()
{
    double fcp_total = 100, math_total = 50, ee_total = 100;
    double fcp_obtained = 85, math_obtained = 42, ee_obtained = 65;
    cout << "Enter Total Marks in FCP: " << fcp_total << endl;
    cout << "Enter Total Marks in Math: " << math_total << endl;
    cout << "Enter Total Marks in EE: " << ee_total << endl;

    cout << "Enter obtained Marks in FCP: " << fcp_obtained << endl;
    cout << "Enter obtained Marks in Math: " << math_obtained << endl;
    cout << "Enter obtained Marks in EE: " << ee_obtained << endl;

    double fcp_percentage = ((fcp_obtained / fcp_total) * 100), math_percentage((math_obtained / math_total) * 100), ee_percentage((ee_obtained / ee_total) * 100);
    cout << "Percentage in FCP: " << fcp_percentage << endl;
    cout << "Percentage in Math: " << math_percentage << endl;
    cout << "Percentage in EE: " << ee_percentage << endl;

    double total_percentage = ((fcp_percentage + math_percentage + ee_percentage) / 3);
    cout << "Percentage in all subjects: " << total_percentage << endl;
    return 0;
}
