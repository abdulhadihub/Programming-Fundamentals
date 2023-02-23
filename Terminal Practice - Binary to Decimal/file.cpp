#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
#include<cstring>

using namespace std;

void read_data(string file_name, ifstream& input, string arr[], int max_size, int& arr_size);
int decimal_conversion(string arr[], int arr_size, int arr2[]);
void output_results(string bin[], int arr_size, int dec[]);

const int max_size = 50;

int main()
{
    int arr_size;
    ifstream input;
    string arr[max_size];

    read_data("data.txt", input, arr, max_size, arr_size);

    int decimal_num[arr_size];

    /*
    for(int i = 0; i<arr_size; i++)
    {
        cout<<arr[i]<<endl;
    }
    */

    decimal_conversion(arr, arr_size, decimal_num);
    output_results(arr, arr_size, decimal_num);

    return 0;
}


void read_data(string file_name, ifstream& input, string arr[], int max_size, int& arr_size)
{
    input.open(file_name);

    arr_size = 0;

    for(int i = 0; i<max_size; i++)
    {
        if(input.eof())
    {
        return;
    }
        input>>arr[i];
        arr_size++;
    }

    input.close();
}

int decimal_conversion(string arr[], int arr_size, int arr2[])
{

    for(int i = 0; i<arr_size; i++)
    {
        int sum = 0;
        int counter = 0;
        string target = arr[i];
        int len = arr[i].size();

        for(int j = len-1; j>=0; j--)
        {
            if(target[j] == '1')
            {
                sum += pow(2, counter);
            }
            counter++;
        }
        arr2[i] = sum;
    }
}

void output_results(string bin[], int arr_size, int dec[])
{
    cout<<left;
    cout<<setw(20)<<"Binary Number"<<right<<setw(20)<<"Decimal Number\n";

    for(int i = 0; i<arr_size; i++)
    {
        cout<<left<<setw(8)<<bin[i]<<right<<setw(25)<<dec[i]<<endl;
    }

}
