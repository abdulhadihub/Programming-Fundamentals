#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    char ch;

    // cin >> x >> y >> y;
    cin >> x >> y;
    cin.get(ch); // basically cin.get(ch) makes it so that the computer takes what would usually be a leading whitespace
    // as a char character so that the output looks blank, if you leave a space between the second input y and the third input
    // definition
    // cin.get() is used for accessing character array. It includes white space characters. Generally, cin with an extraction operator (>>) terminates when whitespace is found.

    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
    cout << "The value of ch is: " << ch << endl;
    return 0;
}