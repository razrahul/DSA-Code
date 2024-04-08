#include<iostream>
#include<string>
#include<vector>
 using namespace std;
  void keypad(string& digit,string output,vector<string>& ans,int index,string mapping[]){

    //base case
    if(digit.length()==0){
        return ;
    }
    if(index >= digit.length()){
        ans.push_back(output);
        return;
    }

    //found number
    int number=digit[index]-'0';
    string value = mapping[number];

    for(int i=0; i<value.length();i++){
        output.push_back(value[i]);
        keypad(digit,output,ans,index+1,mapping);
        output.pop_back();
    }
  }
  void printstring(const vector<string>& ans){
    cout<<"keypad Set "<<endl;
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
 }

 int main()
{
  string digit = "92";

  //create output string
  string output ="";
  //store ans create vector
  vector<string> ans;

  string mapping [10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

  int index=0;
  
  keypad(digit,output,ans,index,mapping);
//   printstring(ans);

// print keypad subset
  cout<<" possible subset fot phone keypad digit = "<<digit<<endl;
  for(const string& output : ans ){
    cout<<"{"<<output<<"}"<<" ";
  }cout<<endl;
}