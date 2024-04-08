#include <iostream>
// #include<iomanip>
using namespace std;

// printn n no of febiracal series
int main()
{

    int a, b, nextno, n;
    a = 0;
    b = 1;
    cout << "emter how no series";
    cin >> n;
    cout << endl
         << a << "  ";

    for (int i = 0; i < n; i++)
    {
        nextno = a + b;
        cout << nextno << "  ";
        a = b;
        b = nextno;
    }

    return 0;
}