#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter cheak value prime = ";
    cin>>n;

    bool isprime=1;

    for (int i = 2; i < n; i++)
    {
        if ((n%i)==0)
        {
            // cout<<n<<" is not a prime no";
            isprime=0;

            break;
        }

        // else{
        //     cout<<n<<" is  a prime no"<<endl;
        //     break;

        // }   wrong
        
    }
    if (isprime==0)
    {
        cout<<n<<"  is not a prime no";
    }
    else{
        cout<<n<<"  is a prime no";

    }
    
    

    return 0;
}