#include <iostream>
using namespace std;
// function signature
void printcount(int n)//no return value then void use
{
// function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // return ;///de v saktr  h nahi v
}
int main()
{
    int n;
    cin >> n;
//function call
    printcount(n);

    // int c=printcount(n) // return nahi isliye galt h

    return 0;
}