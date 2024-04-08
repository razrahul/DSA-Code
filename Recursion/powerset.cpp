#include<iostream>
#include<vector>
 using namespace std;
  void generatepowerset(vector<int>& num,int index,vector<int>subset,vector<vector<int>>& powerset)
{
    // base case
    if(index >= num.size()){
        powerset.push_back(subset);
        return;
    }

    // exclusive
    generatepowerset(num,index+1,subset,powerset);

    //include
    int element = num[index];
    subset.push_back(element);
    generatepowerset(num,index+1,subset,powerset);

}
 void printvector(const vector<vector<int>>& powerset){
    cout<<"Power Set "<<endl;
    for(const auto& subset : powerset ){
        cout<<"[";
        for (int i = 0; i < subset.size(); i++){
            cout<<subset[i];
            if(i < subset.size()-1){
                cout<<" ";
            }
        }
        cout<<"]"<<" ";
    }
 }
 int main()
{
  vector<int> num={1,2,3};

  //create vector to result
  vector<int> subset;
  // final result vector
  vector<vector<int>> powerset;

  generatepowerset(num,0,subset,powerset);

  //print vector
 printvector(powerset);
 
return 0;
}