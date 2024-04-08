#include <iostream>
#include <iomanip>
using namespace std;

/*pattern
---1
--121
-12321
1234321
*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern=";
    cin >> n;

    for (int  i = 1; i <= n; i++)
    {
        int ch=i-1;
        for (int j = 1; j <=n-i; j++)
        {
            cout<<setw(2)<<" ";
        }
        for (int  k = 1; k <= i; k++)
        {
            cout<<setw(2)<<k;
        }
        for (int l = 1; l <=i-1; l++)
        {
            cout<<setw(2)<<ch;
            ch--;
        }
        
       cout<<endl; 
        
    }
    

    return 0;
}