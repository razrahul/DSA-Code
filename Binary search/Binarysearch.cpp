#include<iostream>
 using namespace std;

 int binarysearch(int arr[],int size ,int key){

    int start=0;
    int end =(size-1);
     int mid=start+(end-start)/2;

    // int mid=(start+end)/2;
    /* ya yee v likho long number ke liye

      int mid=start+(end-start)/2;
    */

    for (int  i = 0; start<=end; i++)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])//go to right shift of array
        {
            start=mid+1;
        }
        else{   //go to left shift f array
            end=mid-1;
        }
         mid=start+(end-start)/2;
        
        
    }
    return -1;
    


 }
  

 int main()
{// acessnding ya decesnding order are must.
// ya monotonic function hona chaiye
    int even[6]={1,5,9,12,15,18};
    int odd[5]={1,5,9,17,25};
    

    int evenindex=binarysearch(even,6,12);
    
    cout<<"the index of 12 is "<<evenindex<<endl;

    int oddindex=binarysearch(odd,5,35);

         cout<<"the index of 35 is "<<oddindex<<endl;


    if (evenindex or oddindex==-1)
    {
       cout<<"This key is not avliable in array"<<endl;
    }
// time complicite of binarysearch is  0logN
 
return 0;
}