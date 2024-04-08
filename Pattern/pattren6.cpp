#include <iostream>
#include <iomanip>
using namespace std;

/*pattern
1
23
345
*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        // 2nd method and pattern 1 also
        // int value=row;

        for (int col = 1; col <= row; col++)
        {
            // cout << setw(3) << row + col - 1; 
            // cout << setw(3) << value;
            // value++;

            /*
            pattern 1
            1
            21
            321
            */
           cout<<setw(3)<<row+1-col;
            // cout << setw(3) << value; 

            // value--;

        }
        cout << endl;
    }

    return 0;
}