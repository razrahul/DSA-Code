#include<iostream>
 using namespace std;
  
  void Marge2short(int arr1[],int n1,int arr2[],int n2,int arr3[]){

    int i=0, j=0;
    int k=0;

    while (i<n1 && j<n2)
    {
        //shorted and marge
        if (arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }

    }
    // agar first wala jaida ho
        while (i<n1)
        {
            arr3[k++]=arr1[i++];
        }

        // // agar second  wala jaida ho
         while (j<n2)
        {
            arr3[k++]=arr2[j++];
        }
    
  }

 void printarr(int arr[],int n){
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<endl;
  }



 int main()
{
  /*
  int arr1[5]={5,15,8,6,7};
  int arr2[5]={1,0,4,6,18};

  int arr3[10]={0};
  */
 int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};
cout<<endl;
  Marge2short(arr1, 5, arr2, 3, arr3);

  printarr(arr3,10);
 
return 0;
}