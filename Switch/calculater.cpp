#include <iostream>
// #include <iomanip>
#include <math.h>
using namespace std;

// make a calulatter
int main()
{
    int a, b;
    cout << "enter 1st no=" << endl;
    cin >> a;
    char op;
    cout << "enter a operatiom u wants" << endl;
    cin >> op;

    cout << "enter 2nd no=" << endl;
    cin >> b;

    switch (op)
    {
    case '+':
    {
        cout << a << op << b << "=" << a + b << endl;
        break;
    }
    case '-':
    {
        cout << a << op << b << "=" << a - b << endl;
        break;
    }
    case '*':
    {
        cout << a << op << b << "=" << a * b << endl;
        break;
    }
    case '/':
    {
        cout << a << op << b << "=" << a / b << endl;
        break;
    }
    case '%':
    {
        cout << a << op << b << "=" << a % b << endl;
        break;
    }
    case 'o':
    {
        cout << a << op << b << "=" << pow(a, b) << endl;
        break;
    }

    default:
        cout << "please enter a valid operation " << endl;
        break;
    }

    return 0;
}