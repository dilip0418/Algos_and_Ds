#include<bits/stdc++.h>
using namespace std;

void printF(int index,vector<int> &arr,int a[],int n,int k,int sum){
    
    if(index >=n){
        if(sum == k){
            for(auto i: arr) 
            cout<<i <<" ";
        }
        return;
    }
    arr.push_back(a[index]);
    sum += a[index];
    printF(index+1,arr,a,n,k,sum);

    sum -= a[index];
    arr.pop_back();
    printF(index+1,arr,a,n,k,sum);
}


int main(){
    // int n;
    vector<int> arr;
    int a[] = {3,1,2};
    int n = 3, k = 2;
    printF(0,arr,a,n,k,0); 
    return 0;
}