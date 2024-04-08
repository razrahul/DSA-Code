#include<iostream>
#include<string>
 using namespace std;
  
bool isplindrome(string& str,int i){
    //base case
    if ((str.length())==0)
    {
       return false;
    }
    if (i>(str.length())/2)
    {
        return true ;
    }

    if (str[i] !=str[str.length()-1-i])
    {
        return false;
    }
    else{
        return isplindrome(str,i+1);
    }
    
 } 

 int main()
{
 string name="bookoob";

 bool ans=isplindrome(name,0);

 if(ans){
    cout<<" it is plindrome"<<endl;
 }else{
    cout<<" it is not plindrome"<<endl;

 }

 cout<<"size of string = "<<name.length()<<endl;

 
return 0;
}