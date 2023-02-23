#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double num;
    do
    {
        cin.clear();
        cin.ignore();

        cout<<"please enter a positive number: ";
        cin>>num;
        cout<<endl;

    }while(!cin);
    cout<<num<<endl;

    return 0;
}

