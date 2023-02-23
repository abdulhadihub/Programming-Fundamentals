#include<iostream>

//SP21-BCS-045-A-ABDUL HADI FAROOQ

using namespace std;

int factor_sum(int num);
double sum_sequence(int n);
bool isAmicablePair(int num1, int num2);



int main()
{
    int user_option, func1_num1, func1_num2;
    double n;



cout<<"Please choose one of the following options by entering the respective option number:"<<endl;
cout<<"1 - Check Amicable numbers"<<endl;
cout<<"2 - Do Sum Sequence"<<endl;
cout<<"3 - Exit"<<endl;
cout<<"Choose option: ";
cin>>user_option;
cout<<endl;

switch(user_option)
{
case 3:
    return 0;
    break;

case 1:
cout<<"1 - Please enter the pair of numbers: ";
cin>>func1_num1>>func1_num2;
cout<<"---- "<<isAmicablePair(func1_num1,func1_num2)<<" ---"<<endl;
break;

case 2:
cout<<"2 - Please enter the number n: ";
cin>>n;
cout<<"---- "<<sum_sequence(n)<<" ---"<<endl;
    break;

default:
    cout<<"Invalid option"<<endl;
    break;

}




    return 0;
}

int factor_sum(int num)
{
    int i =1, sum = 0;
    while(i!=num)
    {
        if(num%i==0)
        {
            sum +=i;
            i++;
        }
        else
        {
            i++;
        }
    }
    return sum;
}

bool isAmicablePair(int num1, int num2)
{
    if((factor_sum(num1)==num2)&&(factor_sum(num2)==num1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double sum_sequence(int n)
{
    double sum = 1;
    int i = 1;

    if(n<=0)
    {
        cout<<"Invalid value"<<endl;
    }

    if(n ==1)
    {
        return n;
    }

    while(i<=n)
    {
        int temp = i;
        cout<<temp<<"*";
        sum += (temp+(temp+i))/(temp*(temp+i));
        i++;
    }
    return sum;



}
