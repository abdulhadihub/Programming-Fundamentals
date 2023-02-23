#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

// SP21-BCS-045(A)-ABDUL HADI

using namespace std;

int main()
{
    cout<<"SP21-BCS-045(A)-ABDUL HADI\n\n";

    int player_number, number_of_hits = 0, number_of_outs = 0 ;
    double batting_average, at_bats;
    string player_record;

    cout << fixed << setprecision(3);

    ifstream input_file;
    input_file.open("input_file.txt");
    while (!(input_file.eof()))
    {
        number_of_hits = 0;
        number_of_outs = 0;
        input_file >> player_number;
        getline(input_file, player_record);
        cout << "Player " << player_number << "\'s record: " << player_record << endl;

        for (int i = 0; i < player_record.size(); i++)
        {
            switch (player_record[i])
            {
            case 'H':
                number_of_hits++;
                break;

            case 'O':
                number_of_outs++;
                break;

            default:
                continue;
            }
        }
        at_bats = number_of_outs + number_of_hits;
        batting_average = number_of_hits / at_bats;
        cout << "Player " << player_number << "\'s batting average: " << batting_average << endl
             << endl;
    }
    input_file.close();
    return 0;
}
