#include<iostream>
#include<string>
 using namespace std;
 void  saydigits( int n , string arr[]){
    //base case
    if (n==0)
        return ;
    // one step (processing)
    int digit=n%10;
     n=n/10;

     //R.P
    saydigits(n,arr);

    cout<<arr[digit]<<" ";
  }

 int main()
{
    string arr[10]={"Zero" , "One", "Two" , "Three","Four","Five","Six",
                "Seven","Eight","Nine"};

    int n;
    cout<<"enter the no"<<endl;
    cin>>n;

    saydigits(n, arr);

    
    
    cout<<endl;
 
return 0;
}   