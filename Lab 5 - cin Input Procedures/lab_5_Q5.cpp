#include <iostream>

using namespace std;

int main()
{
    // 46 A 49
    int x = 10, y = 18;
    char z = '*';
    cout << x << " " << static_cast<char>(y) << " " << z << endl;
    cin >> x >> y >> z;
    cout << x << " " << static_cast<char>(y) << " " << z << endl;
    return 0;
}