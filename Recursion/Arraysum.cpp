#include<iostream>
 using namespace std;

 int getsum(int *arr, int size){

    // base case
    if(size==0){
        return 0;
    }
       

    if(size==1)
        return arr[0];

    int remainpart = getsum(arr+1,size-1);
    int sum = arr[0]+remainpart;
    
    return sum;
 }

 int main()
{
 int arr[5]={5,8,4,12,11};

 int sum = getsum(arr,5);

 cout<<" Array sum= "<<sum<<endl;
 
return 0;
}