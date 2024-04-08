#include <iostream>
#include <math.h>
using namespace std;

/*  +ve Decimal to binary n print
 */
int main()
{
    int n, bit;
    cout << "enter the digit= ";
    cin >> n;
    int ans = 0;

    for (int i = 0; n != 0; i++)
    {
        bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
    }
    cout << endl
         << "=" << ans;

    return 0;
}