#include<iostream>
#include<cmath>
#include<cstring>
#include<string>


using namespace std;
void bubble_sort(string arr1[],int c[], int SIZE);

const int SIZE = 10;

int main()
{
int a[ SIZE ] = {12, 8, 2, 6, 4, 10, 89, 68, 45, 37 };
string b[SIZE] = {"Lahore", "Karachi", "Gujrat", "Pindi", "Kohat", "Peshawar", "Bannu", "Quetta", "Wahndo", "Pindi"};

bubble_sort(b,SIZE);

for(int    j=0; j<SIZE; j++)
{
    cout<<b[j]<<endl;
}

    return 0;
}

void bubble_sort(string a[], int c[], int SIZE)
{
      int pass; /* passes counter */
     int i; /* comparisons counter */
     string hold; /* temporary location used to swap array elements */

    /* loop to control number of passes */
    for ( pass = 0; pass < SIZE-1; pass++ ) {
    /* loop to control number of comparisons per pass */
        for ( i = 0; i < SIZE - 1; i++ ) {
    /* compare adjacent elements and swap them if first
    element is greater than second element */
            if ( a[ i ] > a[ i + 1 ] ) {
                    hold = a[ i ];
                    a[ i ] = a[ i + 1 ];
                    a[ i + 1 ] = hold;
            } /* end if */
        } /* end inner for */
    } /* end outer for */

}