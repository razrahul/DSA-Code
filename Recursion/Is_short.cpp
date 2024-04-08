#include<iostream>
 using namespace std;

 void print(int arr[], int e) {

    for(int i=0; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
  
  bool is_shorted(int *arr,int size){

    print(arr,size);
    cout<<endl;
     // base case
     if (size==0 || size ==1)
     {
       return true;
     }

     if (arr[0] < arr[1])
     {
       return is_shorted(arr+1, size-1);
     }
     else{
         return false;
     }
     
     
  }

 int main()
{
  int arr[5]={0,2,5,8,11};
  int arr1[6]={1,5,2,3,0,8};
 
//  int size=5;/
  int size=5;

 bool ans =is_shorted(arr,size-1);
 
 if (ans)
 {
    cout<<" Array is shorted ";
 }
 else{
    cout<<" Array is not shorted ";
 }

 
return 0;
}