#include<iostream>
#include<iomanip>
 using namespace std;
  
bool ispresent(int arr[][4],int row,int col,int target)
{
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    
    while (start<=end)
    {
        int element=arr[mid/col][mid%col];// row=index/col
                                            //col=index%col
        
       if (element==target)
       {
        return 1;
       }
       else if(element< target){
                start=mid+1;
       }
       else{
         end=end-1;
       }
       mid=start+(end-start)/2;
       
    }
    return 0;


} 
int main()
{

     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int temp[3][3]={1,2,3,4,5,6,7,8,9};

    cout<<"enter search element "<<endl;
    int key;
    cin>>key;

    if (ispresent(arr,3,4,key))
    {
        cout<<key<<"   are present"<<endl;
    }
    else{
        cout<<"element are not present"<<endl;
    }
    
 
return 0;
}