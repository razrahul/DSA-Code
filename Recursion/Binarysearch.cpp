#include<iostream>
 using namespace std;

 void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
  
  bool Binarysearch(int *arr,int s, int e,int k){

    // cheak throw print function
    cout<<endl;
    
    print(arr,s,e);
    //base case
    // element not found
    if (s>e){
        return false;
    }

    int mid=s+(e-s)/2;

    cout<<"Mid="<<arr[mid]<<endl;
    // element found
    if (arr[mid]==k) {
        return true;
    }
    // lift Right me jayega
    if (arr[mid] < k)
    {
        return Binarysearch(arr,mid+1,e,k);
    }
    else{  //tp left side me jayega
        return Binarysearch(arr,s,mid-1,k);
    }
    
    
    
  }

 int main()
{
  
  int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 5; 
 bool ans= Binarysearch(arr ,0,size-1,key);

    cout<<endl;
   if (ans)
  {
    cout<<"it's  present";
  }
   else{
    cout<<"Not  present";
  }
 
 
return 0;
}