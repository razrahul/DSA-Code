#include<iostream>
#include<string>
#include<vector>
 using namespace std;
//   void permutation(string& name,int index,vector<string>& ans){
    void permutation(vector<int>& name,int index,vector<vector<int>>& ans){
    //base case
    if(index >= name.size()){
        ans.push_back(name);
        return;
    }

    for(int j=index;j<name.size();j++){
        swap(name[index],name[j]);
       permutation(name,index+1,ans);
       //backtrack
       swap(name[index],name[j]);

    }
  }
  
  void printvector(const vector<vector<int>>& ans){
    cout<<"Power Set "<<endl;
    for(const auto& name : ans ){
        cout<<"[";
        for (int i = 0; i < name.size(); i++){
            cout<<name[i];
            if(i < name.size()-1){
                cout<<" ";
            }
        }
        cout<<"]"<<" ";
    }
 }

 int main()
{
//  string name ="123";
// int name[3] = {1,2,3};
 vector<int> name={1,2,3};
 // create vector to store
 vector<vector<int>> ans;
//   vector<string> ans;
 int index=0;

 permutation(name,index,ans);

 //print string
 /*
 for(const auto& name : ans){
    cout<<"["<<name<<"]"<<" ";
 }cout<<endl;
 */
  printvector(ans);
return 0;
}