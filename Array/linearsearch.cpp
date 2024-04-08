#include<iostream>
 using namespace std;
  
bool search(int arr[],int n,int key){
    
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
           return 1;
        }
        
    }
    return 0;
    
}
 int main()
{ 
    int arr[10]={1,25,45,-5,7,6,-8,-44,66,55};
    int key;

    cout<<"enter the element to search for"<<endl;
    cin>>key;

    bool found=search(arr,10,key);

    if (found)
    {
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present "<<endl;


    }
    

 
 return 0;
}