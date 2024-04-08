#include<iostream>
#include<iomanip>
 using namespace std;
/*
pattern 
D
CD
BCD
ABCD
*/
 int main()
{
    int n;
    cout << "enter no of pattern want pattern";
    cin >> n;
    for (int  i = 1; i <= n; i++)
    {
        char ch;
        ch='A'+n-i;
        for (int  j = 1; j <= i; j++)
        {
            cout<<setw(2)<<ch;
            ch++;
        }
        cout<<endl;
        
    }
    
 
return 0;
}