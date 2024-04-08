#include<iostream>
 using namespace std;
  
// main ka input ka dubicate create hota h function me
void dummy(int n){
    n++;
    cout<<"number is "<<n<<endl;
}
 int main()
{
    int n;
    cin>>n;

    dummy(n);
    cout<<" number is "<<n<<endl;

 
return 0;
}