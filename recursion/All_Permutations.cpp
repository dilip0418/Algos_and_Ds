#include<bits/stdc++.h>
using namespace std;
void AllPermutes(vector<vector<int>> &ans,vector<int> &dummy,vector<int> &nums,vector<int> &map,int n){
    if (dummy.size() == n){
        ans.push_back(dummy);
        return;
    }
    for(int i = 0;i<n;i++){
        if(!map[i]){
            map[i] = 1;
            dummy.push_back(nums[i]);
            AllPermutes(ans,dummy,nums,map,n);
            dummy.pop_back();
            map[i] = 0;
        }
    }
}
int main(){
    vector<vector<int>> ans;
    vector<int> dummy;
    vector<int> nums = {1,2,3};
    vector<int> map(3);
    int index;
    AllPermutes(ans,dummy,nums,map,nums.size());
    for(int i = 0;i<ans.size();i++){
    cout<<"[";
        for(int j=0;j<ans[0].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<"]";
    }
    return 0;
}