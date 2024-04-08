#include <iostream>
#include <iomanip>
using namespace std;

/* pattern
123
456
789
pattern-2
987
654
321
*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern";
    cin >> n;
    //     for pattern 1
    //   int  count = 1;
    // /for pattern-2
    int count = n * n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout <<setw(n)<< count;
            // count+++; for pattern-1
            count--;
        }
        cout << endl;
    }

    return 0;
}