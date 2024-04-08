#include <iostream>
using namespace std;

/* pattern
 ****
 ****
 ****
 ****
 */
int main()
{
    int n;
    cout << "enter no of pattern wants";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}