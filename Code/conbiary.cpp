#include <iostream>
// #include <iomanip>
#include <math.h>
using namespace std;
//    convert decimal to binary no
int main()
{
    int n;
    cout << "enter no to convert ";
    cin >> n;

    int ans = 0;

    for (int i = 0; n != 0; i++)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;
        n=n>>1;
    }
    cout<<"answer="<<ans;

    return 0;
}