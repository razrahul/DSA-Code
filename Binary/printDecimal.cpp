#include <iostream>
#include <math.h>
using namespace std;

/* binary to decimal*/
int main()
{
    int n, digit;
    cout << "enter the Binary= ";
    cin >> n;
    int ans = 0;

    for (int i = 0; n != 0; i++)
    {
        digit = n % 10;

        ans=(digit*pow(2,i))+ans;

        // if (digit == 1)
        // {
        //     ans = ans + pow(2, i);
        // }

        n = n / 10;
    }
    cout << ans;

    return 0;
}