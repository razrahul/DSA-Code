#include<iostream>
 using namespace std;

  int partition(int arr[],int s,int e){
    int pivet=arr[s];
    // found no of element smaller then pivet

    int cnt=0;
    for (int i =s+1; i <=e; i++)
    {
        if(arr[i]<=pivet){
            cnt++;
        }
    }

    // right jagah swap karo cnt pata h
    int pivetindex=s+cnt; 
    swap(arr[s],arr[pivetindex]);

    // left or right ko pivet ke hishab se short karo
    int i=s,j=e;

    while (i<pivetindex && j>pivetindex){

        while(arr[i]<pivet){
            i++;
        }

        while(arr[j]>pivet){
            j--;
        }

        if (i<pivetindex && j>pivetindex)
        {
           swap(arr[i],arr[j]);
        }
        

    }
    return pivetindex;

  }

  
 void Quickshort(int *arr,int s,int e){
    // base case
    if(s>=e)
     return;

     //partition kanana h
     int p=partition(arr,s,e);

     //left part ko short karo
     Quickshort(arr,s,p-1);

     //right part ko short karo
     Quickshort(arr,p+1,e);


 }
 int main()
{
    int arr[5]={2,4,1,6,9};
    int n=5;

    Quickshort(arr,0,n-1);
    //print Array

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
 
return 0;
}       