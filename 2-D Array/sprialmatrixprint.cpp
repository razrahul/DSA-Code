#include<iostream>
#include <iomanip>
 using namespace std;
  /*example  
1 2  3  4
5 6  7  8
9 10 11 12

print 1 2 3 4 8 12 11 10 9 5 6 7
*/

 void sprialprint(int arr[][4],int row,int col){

    int count=0;
    int total=row*col;

    // index initalistion
    int strrow=0;
    int strcol=0;
    int endrow=row-1;
    int endcol=col-1;


    while (count<total)
    {
        //print starting row
        for (int i = strcol; count<total&& i <= endcol; i++)
        {
            cout<<arr[strrow][i]<<" ";
            count++;
        }
        strrow++;
        //print endingcol
        for (int  i = strrow; count<total&& i <= endrow; i++)
        {
            cout<<arr[i][endcol]<<" ";
             count++;
        }
        endcol--;
        // ending row
        for (int  i = endcol; count<total&& i >=strcol; i--)
        {
              cout<<arr[endrow][i]<<" ";
               count++;

        }
        endrow--;
        // starting collum
        for (int  i = endrow; count<total&& i >=strrow; i--)
        {
            cout<<arr[i][strcol]<<" ";
             count++;
        }
        strcol++;
        
        
        
        
    }
    
 }
void printmatrix(int arr[][4], int n, int m){
   cout<<"---> here matrix"<<endl;

    for (int  i = 0; i < n; i++) //i=raw
    {
        for (int  j = 0; j< m; j++)//j=collum
        {
            cout<<setw(2)<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
  

 int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int temp[3][3]={1,2,3,4,5,6,7,8,9};

    printmatrix(arr,3,4);
    sprialprint(arr,3,4);

    
    
    
 
return 0;
}