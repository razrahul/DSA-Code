#include <iostream>
#include <math.h>
using namespace std;

int bit(int n)
{//calculating bit
    int x = n;
    int a;
    int ans = 0;
    int printbit = 0;
    for (int i = 0; n != 0; i++)
    {
        a = n & 1;
        printbit = (a * pow(10, i)) + printbit;
        if (a == 1)
        {
            // int b = 0;
            ans = ans + a;//add set bit in 1
            a = ans;
        }
        n = n >> 1;
    }
    cout << x << "=" << printbit << endl;//print bit

    return a;
}
int main()
{
    int a, b;
    cout << "enter a&b value to cheak set bit in 1" << endl;
    ;
    cin >> a >> b;
    int c = bit(a);
    int d = bit(b);
    cout << "set bit a&b ln 1 =" << c + d;

    return 0;
}