#include<iostream>
 using namespace std;
  
 void bubbleshort(int *arr,int n){

    //base case
    if(n==0||n==1){
        return ;
    }
    // i case solve karna h
    //largest element ko last me le jana h
    for (int  i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //Recursive call
    bubbleshort(arr,n-1);
    
 }
 int main()
{

    int arr[5]={12,4,6,8,0};
    int n=5;
    bubbleshort(arr,n);
    // print Arrey
    for (int  i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }cout<<endl;
    

 
return 0;
}