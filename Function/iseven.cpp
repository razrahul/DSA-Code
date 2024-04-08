#include <iostream>
using namespace std;

// cheak even odd using fustion

bool iseven(int num1)
{
    if (num1 & 1) // even
    {
        return 0;
    }
    else
    { // odd
        return 1;
    }
}

int main()
{
    int a;
    cin >> a;

    int c = (a & 1);
    // cout << c << endl;

    if (iseven(a))
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }

    return 0;
}