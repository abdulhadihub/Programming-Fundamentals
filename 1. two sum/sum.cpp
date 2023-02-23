#include<iostream>

using namespace std;

void two_sum(int arr[], int arr_size, int target);

int main()
{
    const int arr_size = 4;
int arr1[arr_size] = {2, 7, 11, 15};
two_sum(arr1, arr_size, 9);



    return 0;
}

void two_sum(int arr[], int arr_size, int target)
{
    for(int i = 0; i<arr_size-1;i++)
    {
        for(int j =arr_size-1;j>=0;j--)
        {
            if((arr[i]+arr[j])==target)
            {
                cout<<"["<<i<<","<<j<<"]";
                return;
            }
        }
    }
    cout<<"NA"<<endl;
}
