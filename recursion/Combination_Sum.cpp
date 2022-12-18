#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void combinations(int index,int n,vector<vector<int>> &ans,vector<int> &candidate,vector<int> &dummy,int target){
        if(index >= n){
            if(target == 0){
                ans.push_back(dummy);
            }
            return;
        }
        if(candidate[index] <= target){
            dummy.push_back(candidate[index]);
            combinations(index,n,ans,candidate,dummy,target - candidate[index]);
            dummy.pop_back();
        }
        
        combinations(index+1,n,ans,candidate,dummy,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> dummy;
        vector<vector<int>> ans;
        combinations(0,candidates.size(),ans,candidates,dummy,target);
        return ans;
    }
};