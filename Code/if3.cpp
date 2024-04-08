#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = a + 1;

    if ((a = 3) == b) 
    {
        cout << a<< "if wala print";
    }
    else
    {
        cout << a + 1<<"here print";
    }

    return 0;
}