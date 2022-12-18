#include<bits/stdc++.h>
using namespace std;

int printF(int index,vector<int> &arr,int a[],int n,int k,int sum){
    
    if(index >=n){
        if(sum == k){
            return 1;
        }
        return 0;
    }
    arr.push_back(a[index]);
    sum += a[index];
    int l = printF(index+1,arr,a,n,k,sum);

    sum -= a[index];
    arr.pop_back();
    int r = printF(index+1,arr,a,n,k,sum);
    return l+r;
}


int main(){
    
    vector<int> arr;
    int a[] = {1,1,2};
    int n = 3, k = 2;
    cout<<printF(0,arr,a,n,k,0)<<endl; 
    return 0;

}