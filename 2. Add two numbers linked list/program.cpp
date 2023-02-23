#include<iostream>
#include<cmath>

using namespace std;

void reverse_array(int arr[], int temp[], int siz);
int dec_con(int arr[], int siz);
void convert_to_array(int num, int temp[], int siz);

int main()
{
    const int array_size = 3;
    int arr1[array_size] = {2, 4, 3};
    int arr2[array_size] = {5, 6, 4};
    int temp[array_size];

    int answer = dec_con(arr1, array_size) + dec_con(arr2, array_size);
    convert_to_array(answer, temp, array_size);

    for(int i = 0; i<array_size; i++)
    {
        cout<<temp[i];
    }
    cout<<endl;

    return 0;
}

void reverse_array(int arr[], int temp[], int siz)
{
    int j = siz - 1;
    int i;
    for(i = 0; i<siz; i++)
    {
         temp[i] = arr[i];
    }

    for(i = 0; i<siz; i++)
    {
        arr[i] = temp[j];
        j--;
    }
}

int dec_con(int arr[], int siz)
{
    int i;
    int sum = 0;
    for(i = 0; i<siz; i++)
    {
        arr[i] = arr[i]*pow(10,i);
    }


    for(i = 0; i<siz; i++)
    {
        sum  += arr[i];
    }

    return sum;
}

void convert_to_array(int num, int temp[], int siz)
{
    for(int i = 0; i<siz; i++)
    {
         temp[i] = num%10;
        num /= 10;
    }
}
