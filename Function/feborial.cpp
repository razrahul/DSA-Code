#include<iostream>
 using namespace std;
  
// nth tern of feborical series
int feborical(int n)
{
    int a=0,b=1;
    for (int i = 0; i < n; i++)
    {
        int febo=a+b;
        a=b;
        b=febo;
        cout<<febo<<"  ";
    }

    cout<<endl;
    
    // cout<<b;
    return b;
}
int nthfeborical(int n)
{
    int a=0,b=1;
    for (int i = 0; i < n; i++)
    {
        int febo=a+b;
        a=b;
        b=febo;
        // cout<<febo<<"  ";
    }

    // cout<<endl;
    
    // cout<<b;
    return b;
}

 int main()
{
    int n;
    cout<<"enter nth term "<<endl;
    cin>>n;
    cout<<0<<"  "<<1<<"  ";

    feborical(n-2);
    cout<<"nth term is= "<<nthfeborical(n-2);


 
return 0;
}