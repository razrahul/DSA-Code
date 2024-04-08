#include <iostream>
using namespace std;

/* 1234
   1234
   1234
   1234
   2-pattern
   4321
   4321
   4321
   4321
   collum=n-j+1
   */
int main()
{
    int n;
    cout << "enter no of pattern want pattern";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            //    pattern-1
            //     cout<<j;/
            cout << n - j + 1;
        }
        cout << endl;
    }

    return 0;
}