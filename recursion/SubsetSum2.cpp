#include<bits/stdc++.h>
using namespace std;

void subsetSum2(int idx, int sum,vector<vector<int>> &ans,vector<int> &dummy,vector<int> &nums){
    if(sum == accumulate(dummy.begin(),dummy.end(),0)){
        ans.push_back(dummy);
        sum = 0;
    } 

    for(int i=idx; i<nums.size();i++){
        if(i > idx and nums[i] == nums[i-1]) continue;
        if(nums[i] > sum) break;

        dummy.push_back(nums[i]);
        subsetSum2(i+1,sum,ans,dummy,nums);
        dummy.pop_back();
    }
}


int main(){
    vector<vector<int>> ans;
    vector<int> dummy;
    vector<int> nums{1,1,2,2,3};

    subsetSum2(0,3,ans,dummy,nums);
    cout<<"[";
    for(int i = 0;i<ans.size();i++){
        cout<<"[";
        for(int j = 0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<"]";
    }
    cout<<"]";
    // cout<<endl;
    return 0;
}