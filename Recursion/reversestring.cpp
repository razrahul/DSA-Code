#include<iostream>
#include<string>
 using namespace std;
  
 void reversestring(string& str,int i=0){

   int j=str.length()-1-i;
    //base case
     if(j==0){
        return;
    }
    if(i>j){
        return;
    }
   
     swap(str[i],str[j]);
    //  i++;
    //  j--;
     // Recursive call
    reversestring(str,i+1);
   

 }
 int main()
{
    string name= "paker";

    //reversestring(name,0,name.length()-1);
    //reversestring(name,0);

     reversestring(name);

    cout<<name<<endl;
 
return 0;
}