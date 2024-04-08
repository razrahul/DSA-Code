#include <iostream>
using namespace std;

// print nCr=n!/(r!*(n-r)!)

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numi = factorial(n);
    int demo = factorial(r) * factorial(n - r);

    int ans = numi / demo;
    return ans;
}

int main()
{

    int n, r;
    cout << "enter the value nCr" << endl;
    cin >> n >> r;

    cout << "=" << nCr(n, r);

    return 0;
}