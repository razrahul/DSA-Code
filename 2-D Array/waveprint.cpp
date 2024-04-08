#include<iostream>
 using namespace std;

 /*example  
1 2  3  4
5 6  7  8
9 10 11 12

print 1 5 9 10 6 2 3 7 11 12 8 4
*/

  
void waveprint(int arr[][4],int n,int m){

    for (int  col = 0; col < m; col++)
    {
        if (col&1)
        {
            //odd intex--> Buttom to top
            
            for (int  row = n-1; row >=0; row--)
            {
                cout<<arr[row][col]<<" ";
            }
            
        }
        else{
            // 0 or even index --> top to bottom
            for (int  row = 0; row < n; row++)
            {
                cout<<arr[row][col]<<" ";
            }
            
        }
        
    }
    
  }

 int main()
{

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    waveprint(arr,3,4);
 
return 0;
}