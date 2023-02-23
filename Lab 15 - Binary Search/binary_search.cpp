#include<iostream>

using namespace std;

int binary_search(int arr1[],int array_size, int search_value);
void linear_search(int arr1[],int array_size, int search_value);

int main()
{

const int array_size = 5;
int arr1 [array_size] = {2, 4, 6, 8, 10};

cout<<"---"<<binary_search(arr1, array_size, 10)<<"---"<<endl;
cout<<"---";linear_search(arr1, array_size, 10);cout<<"---"<<endl;

    return 0;
}

int binary_search(int arr1[],int array_size, int search_value)
{
    int low = 0;
    int high = array_size - 1;

    while(low<=high)
    {
        int mid = low + high;
        int guess = arr1[mid];
        if(guess == search_value)
        {
            return mid;
        }
        else if(guess > search_value)
        {
            high = mid -1;
        }
        else
        {
            low = mid +1;
        }
    }
    return 999;
}

void linear_search(int arr1[],int array_size, int search_value)
{
    bool flag = 0;

    for(int i = 0; i<array_size; i++)
    {
        if(arr1[i] == search_value)
        {
            cout<<i;
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout<<"Item not found\n";
    }
}
