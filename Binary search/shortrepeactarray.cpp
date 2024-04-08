#include<iostream>
 using namespace std;
  // given shorted array 
  // find repeted array staring index and last index

  int firstoccu(int arr[],int n ,int key){
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    int ans=-1;

    for (int  i = 0; s<=e ; i++)
    {
        if (arr[mid]==key)
        {
            ans= mid;
            e=mid-1;    
        }
        else if(arr[mid] > key){
            e=mid-1;
        }
        else if(arr[mid] < key){
            s=mid+1;
        }

        mid=s+(e-s)/2;
        
        
    }

    return ans;
    
  }

  int lastoccu(int arr[],int n ,int key){

    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    int ans=-1;

    for (int  i = 0; s<=e ; i++)
    {
        if (arr[mid]==key)
        {
            ans= mid;
            s=mid+1; 
        }
        else if(arr[mid] > key){
            e=mid-1;
        }
        else if(arr[mid] < key){
            s=mid+1;
        }

        mid=s+(e-s)/2;
        
        
    }

    return ans;
    
  }

 int main()
{
    int arr0[5]={1,2,3,3,5};

    int arr1[5]={2,3,3,3,4};
    int arr2[7]={1,5,7,8,9,9,9};

    int firepindex = firstoccu(arr2,7,9);
    cout<<" first repet index is "<<firepindex<<endl;
    int lastindex=lastoccu(arr2,7,9);
    cout<<" last repet index is "<<lastindex<<endl;
    cout<<endl<<" no of repected array is "<<(lastindex-firepindex)+1;


    return 0;
}