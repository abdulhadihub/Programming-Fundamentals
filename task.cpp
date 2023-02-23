#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

//SP21-BCS-O45(A)-ABDUL HADI

using namespace std;

// 2D ARRAY GLOBAL VARIABLE FOR FORMAL PARAMETER
const int MAX_COL = 5;

// FUNCTION PROTOTYPES
void read_data(string input_file_name, ifstream& input, string student_name[], int array_size, int test_score[][MAX_COL]);
void calculate_test_grade(const int test_score[][MAX_COL], int array_size, char grade[], double average_test_score[]);
void output_result(const string student_name[], int array_size, const char grade[], const double average_test_score[]);
char get_grade(const double score);
void class_average(const double average_test_score[], int array_size);


int main()
{
    // VARIABLE DECLARATIONS
    const int array_size = 10;
    string student_name[array_size];
    int test_score[array_size][MAX_COL];
    double average_test_score[array_size];
    char grade[array_size];
    ifstream input;

    // FUNCTION CALLS
    read_data("input.txt", input, student_name, array_size, test_score);
    calculate_test_grade(test_score, array_size, grade,average_test_score);
    output_result(student_name, array_size, grade, average_test_score);
    class_average(average_test_score, array_size);

    return 0;
}

// FUNCTION DEFINITIONS

    // FUNCTION TO READ DATA FROM INPUT FILE
void read_data(string input_file_name, ifstream& input, string student_name[], int array_size, int test_score[][MAX_COL])
{

    input.open(input_file_name);

    if(input.fail())
    {
        cout<<"Error in opening input.txt!"<<endl;
        return;
    }

    for(int i = 0; i<array_size; i++)
    {
        input>>student_name[i];
        for(int j = 0; j<MAX_COL; j++)
        {
            input>>test_score[i][j];
        }
        input.ignore(100,'\n');
    }
    input.close();
}

    // FUNCTION TO CALCULATE AVERAGE TEST SCORE AND GRADE FROM ARRAY
void calculate_test_grade(const int test_score[][MAX_COL], int array_size, char grade[], double average_test_score[])
{
    for(int i = 0; i<array_size; i++)
    {
        double score_sum = 0;
        for(int j = 0; j<MAX_COL; j++)
        {
            score_sum += test_score[i][j];
        }
        average_test_score[i] = score_sum/MAX_COL;
        grade[i] = get_grade(average_test_score[i]);

    }
}

    // FUNCTION TO OUTPUT THE RESULTS
void output_result(const string student_name[], int array_size, const char grade[], const double average_test_score[])
{
    cout<<showpoint<<setprecision(4);
    cout<<"Student Name\t Average Test Score\t Grade"<<endl<<endl;
    for(int i = 0; i<array_size; i++)
    {
        cout<<left<<setw(10)<<student_name[i]<<right<<setw(20)<<average_test_score[i]<<setw(14)<<grade[i]<<endl;
    }
}

    // FUNCTION TO CALCULATE GRADE
char get_grade(const double score)
{
    if(score>=90)
    {
        return 'A';
    }
    else if(score>=80)
    {
        return 'B';
    }
    else if(score>=70)
    {
        return 'C';
    }
    else if(score>=60)
    {
        return 'D';
    }
    else if(score<60)
    {
        return 'F';
    }

    if(score>100)
    {
        cout<<"Invalid Score"<<endl;
        return 'X';
    }
}

    // FUNCTION TO OUTPUT CLASS AVERAGE TEST SCORE & GRADE
void class_average(const double average_test_score[], int array_size)
{
    double class_sum = 0;
    for(int k = 0; k<array_size;k++)
    {
        class_sum += average_test_score[k];
    }

    double class_average_score = class_sum/array_size;
    char class_average_grade = get_grade(class_average_score);

    cout<<"\n";
    cout<<left<<setw(10)<<"Class Average Score: "<<right<<setw(9)<<class_average_score<<setw(14)<<class_average_grade<<endl;
}
