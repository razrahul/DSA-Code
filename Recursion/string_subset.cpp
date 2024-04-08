#include<iostream>
#include<string>
#include<vector>
 using namespace std;
  void subsetstring(string str,string output,int index,vector<string>& ans){
    //base case
    if(index >= str.length()){
        ans.push_back(output);
        return;
    }
    // exclude
    subsetstring(str,output,index+1,ans);

    //include
    char element = str[index];
    output.push_back(element);
    subsetstring(str,output,index+1,ans);
  }
  /*
  void printstring(const vector<string>& ans){
    cout<<"Power Set "<<endl;
    for(const auto& output : ans ){
        cout<<"{";
        for (int i = 0; i < output.length(); i++){
            cout<<output;
            if(i < output.length()-1){
                cout<<" ";
            }
        }
        cout<<"}"<<" ";
    }
 */

 int main()
{
 string str= "abc";

 //crete store output string
 string  output ="";
 // create store ans in vector
 vector<string> ans;

 int index=0;
 subsetstring(str,output,index,ans);
//  printstring(ans);
 //print string
  for(const string& output : ans){
    cout<<"{"<<output<<"}"<<" ";
  }cout<<endl;
 
 
return 0;
}