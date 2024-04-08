#include <iostream>
using namespace std;

// create and print nth term Ap=3*n+7

int Ap(int n)
{
    int ans= (3 * n) + 7;
    return ans;
}
int main()
{
    int n;
    
    cout << "enter nth tearm " << endl;
    cin>>n;
    int c=Ap(n);
    cout<<"nth term is"<<c<<endl;

    return 0;
}