#include<iostream>
 using namespace std;
  
/*pattern-1
*
**
***
pattern-2
***
**
*
collum=n+1-i
*/
 int main()
{
 int n;
    cout << "enter no of pattern want pattern";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout<<"* ";

        }
        cout<<endl;

        
    }
    
 
return 0;
}