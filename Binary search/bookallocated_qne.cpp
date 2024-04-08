#include<iostream>
 using namespace std;

 // book allowated problem .....

 bool is_possible(int arr[],int n, int m,int mid){
    int studentcount=1;
    int pagesum=0;

    for (int  i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if (studentcount> m||arr[i]>mid)
            {
                return false;
            }

            
        }
        
    }
    return true;
    
 }

 int Allowbook(int arr[],int n , int m){  // n= size of array(book) || m=partision of book(arary)

        int s=arr[0];  // yee yaa s=0; v likh sakte h
        // int s=0;
        int sum=0;   // because find end=sum of array;

        for (int  i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        int e =sum;
        int ans=-1;
         int mid= s+(e-s)/2;

         for (int  i = 0; s<=e; i++)
         {
            if (is_possible(arr , n , m , mid)) // is possible then left shift mr hoga
            {
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
            
         }
    return ans;
               
 }
  

 int main()
{
// no of pages allowted in short_array form
    int book[4]={10,20,30,40};

    int m=2;

    int min_allowted=Allowbook(book,4,m);
    cout<<"minimun book allowted is "<<min_allowted<<endl;


 
return 0;
}