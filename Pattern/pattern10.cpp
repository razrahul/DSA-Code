#include <iostream>
#include<iomanip>
using namespace std;

/*pattern
---*
--**
-***
****
*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout<<setw(2) << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<setw(2) << "*";
        }
        cout << endl;
    }

    return 0;
}