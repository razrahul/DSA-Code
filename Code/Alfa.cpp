#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << " Enter the value=";
    cin >> ch;
    if (ch >= 97 && ch <= 122)
    {
        cout << ch << " is lower case alpalatter";
    }
    else if (65 <= ch && ch <= 90)
    {
        cout << ch << " is upper case alpalatter";
    }
    else if (48 <= ch && ch <= 57)
    {
        cout << ch << " is numaric value";
    }
    else
    {
        cout << ch << " is special chareater";
    }

    return 0;
}