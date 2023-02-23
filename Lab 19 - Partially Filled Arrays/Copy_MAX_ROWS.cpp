#include<iostream>

const int MAX_ROW = 3;
const int MAX_COL = 5;

using namespace std;

void Copy( const int X[][MAX_COL], int Y[][MAX_COL], int count_rows, int count_cols);

int main()
{
    int x1[MAX_ROW][MAX_COL] = {{5,12,17,9,3}, {13,4,8,14,1}, {9,6,3,7,21}};
    int y1[MAX_ROW][MAX_COL];

    Copy(x1, y1, MAX_ROW, MAX_COL);

    for(int k = 0; k<MAX_ROW; k++)
    {
        for(int l = 0; l<MAX_COL; l++)
        {

            cout<<x1[k][l]<<" - "<<y1[k][l]<<endl;
        }
    }

    return 0;
}

void Copy( const int X[][MAX_COL], int Y[][MAX_COL], int count_rows, int count_cols)
{
    for(int i = 0; i<count_rows;i++)
    {
        for(int j = 0; j<count_cols;j++)
        {
             Y[i][j] =  X[i][j];
        }
    }
}