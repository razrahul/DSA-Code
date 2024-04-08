#include<iostream>
 using namespace std;


 void printArray(int arr[],int n){
     cout<<"shortin Array  "<<n<<"size wala"<<endl;
     for (int  i = 0; i < n; i++)
     {
        cout<<arr[i]<<"  "; 
     }
     
 }
  
  void Arrayshorting(int arr[],int n){

    for (int  i = 0 ; i < n-1; i++)
    {      bool swaped = false;
        for (int  j = 0; j < n-i-1; j++)  // n-i isliye qkii last array value har round me short hote jata h
        {                               // n-i-1 isliye qkii i wala loop 0 start hua h or n-2 tak chaleha 
            if (arr[j]>arr[j+1])        // ye sab beter time compibilite ke liye
            {
                    swap(arr[j],arr[j+1]);

                    swaped = true;
            }
            
        }
        if (swaped==false)
        {
            break;
        }
        
        
    }
    
  }

 int main()
{
    int unarray[]={10,1,7,6,14,9};

    Arrayshorting(unarray,6);

    printArray(unarray,6);
 
return 0;
}