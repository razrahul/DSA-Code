#include<iostream>
 using namespace std;

 void printarray(int arr[],int n){

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
 }
  
void arrayswap(int arr[],int n){

    int start=0;
    int end = n-1;
    if (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    

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

arrayswap(num,n);
printarray(num,n);

 
return 0;
}