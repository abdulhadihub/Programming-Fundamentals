#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

char computeGrade(double student_score);
double compareKeys(const char true_answer_key[], const char student_answer_key[], int array_size);

int main()
{
    const int string_size = 21;
    string student_id;
    char true_answer_key[string_size];
    char student_answer_key[string_size];
    double student_score;
    char student_grade;
    int number_of_students = 3;

    ifstream input;
    input.open("input.txt");

    input.get(true_answer_key, 21);

    cout<<left<<setw(10)<<"Student ID"<<right<<setw(21)<<"Answers "<<setw(17)<<"Test Score\t"<<setw(10)<<"Test Grade\n\n";

    for(int k = 0; k < number_of_students; k++)
    {
    input>>student_id;
    input.ignore(1);
    input.get(student_answer_key, 21);


    student_score = compareKeys(true_answer_key, student_answer_key, string_size);
    student_grade = computeGrade(student_score);

    cout<<left<<setw(10)<<student_id<<" "<<right<<setw(21)<<student_answer_key<<" "<<setw(10)<<student_score<<" "<<setw(10)<<student_grade<<endl;
    }

    return 0;
}

char computeGrade(double student_score)
{
    double student_percentage = (student_score/40)*100;

    char student_grade;

    if(student_percentage>=90)
    {
        student_grade = 'A';
    }
    else if(student_percentage>=80)
    {
        student_grade = 'B';
    }
    else if(student_percentage>=70)
    {
        student_grade = 'C';
    }
    else if(student_percentage>=60)
    {
        student_grade = 'D';
    }
    else if(student_percentage<60)
    {
        student_grade = 'F';
    }

    if(student_percentage>100)
    {
        cout<<"Invalid Score"<<endl;
        student_grade = 'X';
    }

    return student_grade;
}

double compareKeys(const char true_answer_key[], const char student_answer_key[], int array_size)
{
    double student_score = 0;
    for(int i = 0; i<array_size-1;i++)
    {
        if(student_answer_key[i] == true_answer_key[i])
        {
            student_score += 2;
        }
        else if(student_answer_key[i] == ' ')
        {
            continue;
        }
        else if(student_answer_key[i] != true_answer_key[i])
        {
            student_score -= 1;
        }
        //cout<<i+1<<" "<<student_answer_key[i]<<" - "<<true_answer_key[i]<<" - student score = "<<student_score<<endl;
    }

    return student_score;
}
