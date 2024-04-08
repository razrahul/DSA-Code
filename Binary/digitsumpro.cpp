#include <iostream>
using namespace std;

/* digit 152
pro=1*5*2=10
sum=1+5+2=8
fianal ans sub=10-8=2 */
int main()
{
    int n, digit;
    cout << "enter the digit= ";
    cin >> n;
    int pro = 1;
    int sum = 0;

    for (int i = 0; n != 0; i++)
    {
        digit = n % 10;

        pro = digit * pro;

        sum = digit + sum;

        n = n / 10;
    }

    cout << "The Digit suntrate Result=" << (pro - sum);

    return 0;
}