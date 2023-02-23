#include<iostream>

using namespace std;

int main()
{
    const int no = 5;

    int arr1[no] = {2, 4, 6, 8, 10};
    int arr2[no] = {0};

    for(int i = no-1;i>=0;i--)
    {
        arr2[(no-1)-i] = arr1[i];
    }

    for(int j = 0; j<no;j++)
    {
        cout<<j+1<<".\t"<<arr1[j]<<"\t"<<arr2[j]<<endl;
    }



    return 0;
}
