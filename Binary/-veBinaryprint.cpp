#include <iostream>
#include <math.h>
using namespace std;

/*  +-ve Decimal to binary n print*/
int main() 
{
    long long int n;
    cout << "enter the digit= ";
    cin >> n;
    unsigned long long int ans = 0;
    if (n < 0) 
    {
        n = pow(2, 16) + n; 
    }
    int i = 0;
    while (n)
    {
        int lastbit = n & 1;
        ans = (lastbit * pow(10, i)) + ans;
        n = n >> 1;
        cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}