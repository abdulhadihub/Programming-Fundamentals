#include<iostream>

using namespace std;

int binary_search(int arr1[],int array_size, int search_value);

int main()
{

const int array_size = 5;
int arr1 [array_size] = {2, 4, 6, 8, 10};

cout<<"---"<<binary_search(arr1, array_size, 10)<<"---"<<endl;

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

int find_smallest(int arr1[], int arr_siz)
{
    int smallest = arr1[0];
    int smallest_index = 0;
    for(int i = 1; i<arr_size; i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

void selection_sort(int arr1[], int arr_siz)
{
    for(int i = 0; i< arr_siz; i++)
    {
        int smallest = find_smallest(arr1[], arr_siz)

    }
}
