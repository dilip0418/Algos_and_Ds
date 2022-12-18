//sstriver's approach

class Solution {
public:
    
    void combinations(int ind,vector<vector<int>> &ans,vector<int> &dummy,vector<int> &candidates,int target){
        if(target == 0){
            ans.push_back(dummy);
        }
        for(int i = ind;i<candidates.size();i++){
            if(i > ind and candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            
            dummy.push_back(candidates[i]);
            combinations(i+1,ans,dummy,candidates,target - candidates[i]);
            dummy.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> dummy;
        sort(candidates.begin(),candidates.end());
        combinations(0,ans,dummy,candidates,target);
        return ans;
    }
};




// another approach for solving without loop

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<vector<int>>&answer,vector<int>&vec)
    {
        for(int i=0;i<answer.size();i++)
        {
            if(answer[i]==vec)
                return true;
        }
        return false;
    }

    void res( vector<vector<int>>&answer,vector<int>&vec,vector<int>&candidates,int target,int sum,int i){
        if(i>=candidates.size())
        {
            if(sum==target)
            {
                if(!check(answer,vec))
                    answer.push_back(vec);  
            }
              return; 
        }
        if(sum>target)
            return;
        if(sum<=target)
        {
            vec.push_back(candidates[i]);
            sum+=candidates[i];
            res(answer,vec,candidates,target,sum,i+1);
            vec.pop_back();
            sum-=candidates[i];
            res(answer,vec,candidates,target,sum,i+1);
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>answer;
        vector<int>vec;
        res(answer,vec,candidates,target,0,0);
        return answer;
    }
};














































