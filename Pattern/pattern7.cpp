#include <iostream>
using namespace std;

/*pattern
AAA
BBB
CCC
*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        char ch;
        ch='A'+row;
        for (int col  = 0; col  < n; col ++)
        {
           cout<<ch ;
        }
        cout<<endl;
        
    }
    

    return 0;
}