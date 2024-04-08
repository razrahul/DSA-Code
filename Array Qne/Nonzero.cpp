#include<iostream>
// #include<vector>  // array kr jagah vector ka use kia h
 using namespace std;

 // zero ko ek taraf karna h right side 
 // hum logic no ko he left side me lata huu

 void printArray(int arr[],int n){
     cout<<"shortin Array  "<<n<<"size wala"<<endl;
     for (int  i = 0; i < n; i++)
     {
        cout<<arr[i]<<"  "; 
     }
     
 }
  

 void moveZero( int arr[],int n){

    int nonZero=0;
    for (int  j  = 0; j  < n; j ++)
    {
        if(arr[j] != 0){

            swap(arr[j],arr[nonZero]);
            nonZero++;
        }
    }
    

 }
  

 int main()
{

    /*vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);

    int n=v.size(); */

    int unarray[5]={0,1,0,3,12};

    moveZero(unarray,5);

    printArray(unarray,5);


 
return 0;
}