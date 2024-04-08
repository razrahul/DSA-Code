#include<iostream>
 using namespace std;

 void printArray(int arr[],int n){
     cout<<"shortin Array  "<<n<<"size wala"<<endl;
     for (int  i = 0; i < n; i++)
     {
        cout<<arr[i]<<"  "; 
     }
     
 }
  
void arrayshort(int arr[],int n){

    for (int  i = 1; i < n; i++)
    {
       int temp=arr[i];
         int  j  = i-1 ;
        for ( ;j>=0 ; j --)
        {                                               //int unarray[]={10,1,7,6,14,9};
           if (arr[j]>temp)
           {
                //shift
              arr[j+1]=arr[j];
           }
           else{
                    // same ya less nahi h to ruk jaao
                break;
           }
        }
        arr[j+1] =temp;
    }

}

 int main()
{
   int unarray[]={10,1,7,6,14,9};

    arrayshort(unarray,6);

    printArray(unarray,6);

    

 
return 0;
}