#include<iostream>
#include<vector>
// #include<iomanip>
 using namespace std;
  
 bool isPrime(int n){

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
 }

 //sive of eratosthenes method

 int countprimeno(int n){

    int cnt=0;
    vector<bool>prime(n ,true);
    prime[0]=prime[1]=false;
    for (int  i  = 2; i  < n; i ++)
    {
        if (isPrime(i))
        {
            cnt++;
            for (int  j =2*i; j < n; j++)
            {
                prime[j]=0;
            }
            
        }
        
    }
    return cnt;
    
 }

 /*
  // normal method isme jaida no pr kaam nhi karega.
 int countprime(int n){

    int cnt=0;
    for (int  i = 2; i < n-1; i++)
    {
        if (isPrime(i))
        {
            cnt++;
        }
        
    }
    return cnt;
 }
 */

 int main()
{

    int n;
    cout<<"enter no"<<endl;
    cin>>n;

  int ans=countprimeno(n);
  cout<<" no of prime no present in n="<<ans;
 
return 0;
}