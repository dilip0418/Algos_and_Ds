#include<bits/stdc++.h>
using namespace std;


/* Using an Intution (i.e applying the swapping technique) */

/* void genPermutations(int index, vector<vector<int>> &ans, vector<int> &nums){
    if(index == nums.size()-1)
    {
        ans.push_back(nums); 
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        genPermutations(index+1,ans,nums);
        swap(nums[index],nums[i]);
    }
}

vector<vector<int>> AllPermutations(vector<int> &nums){
    vector<vector<int>> ans;
    genPermutations(0,ans,nums);
    return ans;
} */


/* using built-in method*/

vector<vector<int>> AllPermutations(vector<int> &nums){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    do{
        ans.push_back(nums);
    }while(next_permutation(nums.begin(),nums.end()));
    return ans;
}



int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = AllPermutations(nums);
    for(auto i:ans){
        cout<<"[";
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<"]";
    }
    return 0; 
}