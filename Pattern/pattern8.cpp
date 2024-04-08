#include <iostream>
#include<iomanip>
using namespace std;

/*pattern
ABC
BCD
CDE*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern";
    cin >> n;
    

    for (int  i = 1; i <= n; i++)
    {
        // char ch;
        // ch='A'+i-1;
        for (int j = 1; j <= n; j++)
        {
           
            // cout<<setw(2)<<ch;
            // ch++;
             // 2nd metod
            char ch='A'+i+j-2;
            cout<<setw(2)<<ch;

        }
        
    cout<<endl; 
    }
    

    return 0;
}