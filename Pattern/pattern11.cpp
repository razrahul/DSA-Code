#include <iostream>
#include<iomanip>
using namespace std;

/*pattern
1234
-234
--34
---4
*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern=";
    cin >> n;
    for (int  i = 1; i <= n; i++)
    {
        for (int  j = 1; j <=i-1; j++)
        {
            cout<<setw(2)<<" ";

        }
        for (int  k = 1; k <=n-i+1; k++)
        {
           cout<<setw(2)<<k;
        }
        
        
    cout<<endl;
    }
    

    return 0;
}