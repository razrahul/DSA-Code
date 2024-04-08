#include<iostream>
 using namespace std;
  
  int power(int a,int b){

    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    // recursive call
    int ans = power(a,b/2);

    if(b&1){ // b are odd.
        return a*ans*ans;
    }else{  // b is even.
        return ans*ans;
    }

    return ans;
  }
 int main()
{
   int a,b;
   a=5; b=4;

   int pow=power(a,b);

   cout<<"power = "<<pow<<endl;
 
return 0;
}