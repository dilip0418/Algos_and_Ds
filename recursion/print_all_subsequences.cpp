#include<bits/stdc++.h>
using namespace std;
void subseq(int index,vector<int> &arr,vector<int> &dummy,int n){
    if(index >= n){
        for(auto i: dummy) cout <<i<<" ";
        if(dummy.size() == 0) cout<<"{}"<<endl;
        cout<<endl;
        return;
    }
    // dummy.
    dummy.push_back(arr[index]);
    subseq(index+1,arr,dummy,n);

    dummy.pop_back();
    subseq(index+1,arr,dummy,n);
}
int main()
{
    vector<int> arr = {3,1,2};
    vector<int> dummy;
    subseq(0,arr,dummy,arr.size());
    return 0;
}