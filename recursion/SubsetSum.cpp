#include<bits/stdc++.h>
#include<numeric>
using namespace std;

void subsetSum(int idx,vector<int> &sum,vector<int> &dummy,vector<int> &nums){
    if(idx >= nums.size()){
        
        sum.push_back(accumulate(dummy.begin(),dummy.end(),0));
        return;
    }

    dummy.push_back(nums[idx]);
    subsetSum(idx+1,sum,dummy,nums);

    dummy.pop_back();
    subsetSum(idx+1,sum,dummy,nums);
}

int main(){
    vector<int> sum,dummy,nums;

    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);

    subsetSum(0,sum,dummy,nums);
    sort(sum.begin(),sum.end());
    for(auto i: sum) cout <<i<<" ";

    return 0;
}