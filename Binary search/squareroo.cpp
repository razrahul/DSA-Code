#include<iostream>
 using namespace std;

 // calculating square root by binarysearch
 long long int sqrtintger(int n){

    int s=0;
    int e=n;

  long long  int  mid=s+(e-s)/2;

  long long int ans=0;

   for (int  i = 0; s<=e; i++)
   {
   long long int square=mid*mid; 
    
    if (square == n)
    {
        return mid;
    }
    if (square < n) 
    {
        ans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid= s+ (e-s)/2;
    
    
   }
   
return ans;

 }

 // for cal dicimal no in final sqrt ans
 double moreprecision(int n, int precision , int tempsol){

    double factor=1;

    double ans=tempsol;

    for (int  i = 0; i < precision; i++)
    {
        factor=factor/10;

        for (double  j = ans; j*j < n; j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;
    
 }
  

 int main()
{

    int n;
    cout<<"enter the no for square root"<<endl;
    cin>>n;

    int tempsol=sqrtintger(n);
    cout<<"intger square root is "<<tempsol<<endl;

    double finalans=moreprecision(n,3,tempsol);
    cout<<"final ans of square root is "<<finalans<<endl;

 
return 0;
}

