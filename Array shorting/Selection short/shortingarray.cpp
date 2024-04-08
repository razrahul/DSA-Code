#include<iostream>
 using namespace std;

 void printArray(int arr[],int n){
     cout<<"shortin Array  "<<n<<"size wala"<<endl;
     for (int  i = 0; i < n; i++)
     {
        cout<<arr[i]<<"  "; 
     }
     
     
 }

 void shortingArray(int arr[], int n){

    for (int  i = 0; i < n-1; i++)
    {
        int minindex=i;

        for (int  j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex = j;
            }
            
        }
        swap(arr[minindex],arr[i]);
        
    }
    
 }
  

 int main()
{
    int un_short[5]={ 12,8,6,14,10};

    int math[7]={12,3,-8,18,-18,55,1};

    shortingArray(un_short,5);
    printArray(un_short,5);

    shortingArray(math,7);
    printArray(math,7);

 
return 0;
}