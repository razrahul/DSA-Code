#include<iostream>
 using namespace std;
 int getmin(int arr[],int size){

    int mini=INT_MAX ;
    for (int  i = 0; i < size ; i++)
    {

        mini=min (mini,arr[i]);//2nd method
        // if (arr[i]<mini)
        // {
        //     mini=arr[i];
        // }
        
    }
    return mini;
}
  
int getmax(int arr[],int size){

    int maxi=INT_MIN ;
    for (int  i = 0; i < size ; i++)
    {
        maxi=max(maxi,arr[i]);
        // if (arr[i]>maxi)
        // {
        //     maxi=arr[i];
        // }
        
    }
    return maxi;
}
 int main()
{

    int n;
    cout<<"enter size of no"<<endl;
    cin>>n;

    int num[100];
    cout<<"enter no"<<endl;

for (int  i = 0; i < n; i++)
{
    cin>>num[i];
}
int c =getmax(num ,n);
int d=getmin(num,n);
    
    cout<<"maximum value is="<<c<<endl;
    cout<<"minimun value is="<<d<<endl;


 
return 0;
}