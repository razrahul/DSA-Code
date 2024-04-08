#include<iostream>
 using namespace std;
  
void sumarray(int arr[],int n){
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum=arr[i]+sum;
    }

    cout<<"sum of array= "<<sum<<endl;
    
}
 int main()
{
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;

    int arr[100];

    cout<<"enter the value of array "<<endl;

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sumarray(arr,n);
    

 
return 0;
}