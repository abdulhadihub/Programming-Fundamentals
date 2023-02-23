#include <iostream>

using namespace std;

// int power(int a, int b); Prototype function

int power(int a, int b)
{
    int result = a;
    if (b == 0)
    {
        result = 1;
    }

    for (int count = 1; count < b; count++)
    {
        result *= a;
    }
    return result;
}
int main()
{
    cout << power(7, 7) << endl;
    return 0;
}
