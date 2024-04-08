#include<iostream>
 using namespace std;
  
 void slectonshort(int *arr,int start,int e){
    // base case
    if(start==e-1){
        return;
    }
    // 1 case slove karo
    // minimum element fond karo

    int minindex= start;
    for (int  i = start+1; i < e; i++)
    {
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }

    // swap to min element
    swap(arr[start],arr[minindex]);
    
    // recusive call
    slectonshort(arr,start+1,e);

 }
 int main()
{
 int arr[5]={15,1,8,12,0};
 int n=5;

 slectonshort(arr,0,n);
 // print Array

 for (int  i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }cout<<endl;
 
 
return 0;
}