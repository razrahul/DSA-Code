#include <iostream>
// #include<iomanip>
using namespace std;

// no of note want 100,50,20,1
int main()
{
    int num, rem100, rem50, rem20, rem10;
    char a, note;

    cout << "enter total ruppes=";
    cin >> num;
    // cout << "enter no u want ruppes=";
    // cin >> note;

    rem20 = rem50 % 20;
    rem10 = rem20 % 10;
    note = '$';

    switch (note)
    {
    case '$':
        cout << "no of 100 ka note=" << num / 100 << endl;
    /* code */
    // break;
    case '+':
    {
        rem100 = num % 100;

        cout << "no of 50 ka note=" << rem100 / 50 << endl;
    }

    case '-':
    {
        int rem50 = rem100 % 50;
        cout << "no of 20 ka note=" << rem50 / 20 << endl;
    }
    case '*':
    {
        // int rem20 = rem50 % 20;
        // if (rem20 > 10)
        // {

        // }
        cout << "no of 10 ka note=" << rem20 / 10 << endl;
    }
    case '/':
    {
        // int rem10 = rem20 % 10;
        cout << "no of 1  ka note=" << rem10 / 1 << endl;
    }

    default:
    {
        cout << "THANKS";
        // break;
    }
    }
    return 0;
}