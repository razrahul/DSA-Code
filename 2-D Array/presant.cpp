#include<iostream>
 using namespace std;

 void sumcolarray(int arr[][4],int n,int m){
    cout<<" sum collum wise 2-d array"<<endl;
    

    for (int  j = 0; j < m; j++)
    {
        int sum=0;
        for (int  i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        cout<<"col"<<j<<"="<<sum<<endl;
        
    }
    // return sum;
 }

 void sumrowarray(int arr[][4],int n,int m){

    

    for (int  i = 0; i < n; i++)
    {
        int sum=0;
        for (int  j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout<<"row"<<i<<"="<<sum<<endl;
        
    }
    // return sum;
 }

 bool ispresent( int arr[][4] ,int key, int n ,int m){

    for (int  row = 0; row < 3; row++) //i=raw
    {
        for (int  col = 0; col< 4; col++)//j=collum
        {
           if (arr[row][col]==key )
           {
            return 1;
           }
           
        }
        
    }
    return 0;
        
 }
  
 int largrowsum(int arr[][4],int n,int m){

    int max=INT_MIN;
    int rowindex;

     for (int  i = 0; i < n; i++)
    {
        int sum=0;
        for (int  j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum>max)
        {
             rowindex=i;
        }
        
        
    }
    return rowindex;
 }


 int main()
{
    int temp1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int temp[3][4]={{1,11,111,1111} ,{2,22,222,2222},{3,33,333,3333}};

    // int arr[3][4];/
/*
    cout<<"enter matrix"<<endl;
        // input 2-d array
        
    for (int  i = 0; i < 3; i++) //i=raw
    {
        for (int  j = 0; j< 4; j++)//j=collum
        {
            cin>>arr[i][j];
        }
        
    }
    */

    cout<<"print 2=d array(matrix)"<<endl;

    for (int  i = 0; i < 3; i++) //i=raw
    {
        for (int  j = 0; j< 4; j++)//j=collum
        {
            cout<<temp1[i][j]<<" ";
        }
        cout<<endl;
        
    }
/*
    cout<<"enter the element to search"<<endl;
    int key;
    cin>>key;

    if (ispresent(temp,key,3,4))  
    {
        cout<<key<<"element are present";
    }
    else{
        cout<<"element are not present";
    }
    */
    cout<<endl;

    sumrowarray(temp1,3,4);
    cout<<endl;
    sumcolarray(temp1,3,4);

    // cout<<sum;

    int largrow=largrowsum(temp1,3,4);
    cout<<"Largest row ="<<largrow<<endl;
    

    

 
return 0;
}