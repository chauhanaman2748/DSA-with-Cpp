#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    char a;
    cin >> a;
    a >= 65 && a < 90 ? cout << 1 : a >= 97 && a < 122 ? cout << 0
                                                       : cout << -1;
}
