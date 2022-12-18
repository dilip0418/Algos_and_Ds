#include<bits/stdc++.h>
using namespace std;

bool printF(int index,vector<int> &arr,int a[],int n,int k,int sum){
    
    if(index >=n){
        if(sum == k){//if condition satisfied 
            for(auto i: arr) 
            cout<<i <<" ";
        cout << endl;
        return true;
        }
        return false;//if condition not satisfied
    }
    arr.push_back(a[index]);
    sum += a[index];
    if(printF(index+1,arr,a,n,k,sum)) return true;

    sum -= a[index];
    arr.pop_back();
    if(printF(index+1,arr,a,n,k,sum)) return true;

    return false;
}


int main(){
    // int n;
    vector<int> arr;
    // int a[] = {1,2,2};
    int a[] = {3,4,5};
    int n = 3, k = 2;
    printF(0,arr,a,n,k,0); 
    return 0;
}