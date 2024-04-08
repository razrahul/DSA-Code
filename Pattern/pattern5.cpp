#include<iostream>
#include<iomanip>
 using namespace std;
  
/* pattern 
1
23
345
count wala h
*/
 int main()
{
 int n;
    cout << "enter no of pattern want pattern";
    cin >> n;
    int count=1;
    
    for (int collum = 1; collum <= n; collum++)
    {
        for (int row = 1; row <= collum; row++)
        {
            cout<<setw(4)<<count;
            count++;

        }
        cout<<endl;
        
    }
    
 
return 0;
}