#include <iostream>
#include <iomanip>
using namespace std;

/*pattern
1234554321
1234**4321
123****321
12******21
1********1
*/
int main()
{
    int n;
    cout << "enter no of pattern want pattern=";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << setw(2) << j;
        }
        for (int k = 1; k <= 2 * (i - 1); k++)
        {

            cout << setw(2) << "*";
        }
        for (int l = 1; l <= n - i + 1; l++)
        {
            cout << setw(2) << n - i - l + 2;
        }

        cout << endl;
    }

    return 0;
}