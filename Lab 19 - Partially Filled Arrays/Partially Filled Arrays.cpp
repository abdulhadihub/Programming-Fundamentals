#include<iostream>

// GLOBAL VARIABLE FOR PARTIALLY FILLED ARRAYS - FORMALITY - EVEN IF NOT USED DIRECTLY
const int MAX_ROW = 10;
const int MAX_COL = 10;

using namespace std;

void Subarray2( const int X[][MAX_COL], int Y[][MAX_COL], int acutal_rows, int actual_cols, int rows_to_be_copied, int cols_to_be_copied);

int main()
{
    // DECLARE 2 ARRAYS - ONE SENDER , OTHER RECEIPENT - NOTE WITH MAX ROW COL SIZE - REGARDLESS OF ACTUAL SIZE
    int x1[MAX_ROW][MAX_COL] =  {{5,12,17,9,3}, {13,4,8,14,1}, {9,6,3,7,21}}; // 3 X 5 IS MAX
    int y1[MAX_ROW][MAX_COL];

    // TRUE ARRAY SIZE - COPIED ARRAY CANNOT GO BEYOND ORIGINAL ARRAY SCOPE OF 3 X 5 REGARDLESS OF MAX_ROW SIZE
    int actual_rows = 3, actual_cols=5;

    // VARIABLE FOR INDEXES TO BE COPIED
    int copied_rows = 3, copied_cols=3;

    // FUNCTION CALL YOU JUST NEED ROWS AND COLS PARAMETERS TO BE COPIED
    // NOTE - YOU CAN ADD ACTUAL ROWS PARAMETER IF YOU WANT TO ADD CHECK AND BALANCE SO THAT COPIED ROWS ARE
    // NOT OUTSIDE OF SCOPE OF ACTUAL ROWS - USING IF CONDITION
    // NO NEED OF ACTUAL ROW OTHER THAN THAT
    Subarray2(x1, y1, actual_rows, actual_cols, copied_rows, copied_cols);

    // FOR LOOP IN INT MAIN() SHOULD ONLY RUN FOR COPIED ROWS, OTHERWISE POSSIBLE GARBAGE VALUES WILL BE RETURNED
    for(int k = 0; k<copied_rows; k++)
    {
        for(int l = 0; l<copied_cols; l++)
        {

            cout<<"x1["<<k<<"]["<<l<<"] "<<x1[k][l]<<" - "<<"y1["<<k<<"]["<<l<<"] "<<y1[k][l]<<endl;
        }
    }

    return 0;
}

// FUNCTION DEFINITION - ONLY COPY THE ROWS AND COLS REQUIRED
// FOR 2D ARRAYS MAX COL - MUST BE DECLARED - IN FUNCTION DEFINITION FOR FORMAL PARAMETERS
void Subarray2( const int X[][MAX_COL], int Y[][MAX_COL], int actual_rows, int actual_cols, int rows_to_be_copied, int cols_to_be_copied)
{
    if((rows_to_be_copied>actual_rows) || (cols_to_be_copied>actual_cols))
    {
        cout<<"ERROR: Rows and Columns to be copied are outside the scope of the Actual array"<<endl;
        return;
    }

    for(int i = 0; i<rows_to_be_copied;i++)
    {
        for(int j = 0; j<cols_to_be_copied;j++)
        {
             Y[i][j] =  X[i][j];
        }
    }
}
