#include<iostream>

using namespace std;

int reversefunc(const int array_size);

int main()
{
    const int value = 5;
    int arr1[value] = {2, 4, 6, 8, 10};

    cout<<reversefunc(value)<<endl;



    return 0;
}

int reversefunc(const int array_size)
{

    int arr[array_size];
    for(int j = 0; j<array_size;j++)
    {
        cout<<"Please enter the value of element "<<j+1<<": ";
        cin>>arr[j];
    }

    int arr2[array_size] = {0};

    for(int i = array_size-1;i>=0;i--)
    {
        arr2[(array_size-1)-i] = arr[i];
    }

    for(int k = 0; k<array_size;k++)
    {
        cout<<arr2[k]<<" ";
    }
    cout<<endl<<"Ignore return value ";

    return 9;
}
