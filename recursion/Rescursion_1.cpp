#include<iostream>
using namespace std;


void fun(int i,int n){
     
    if(i > n) return;
    // cout<<i<<" ";
    cout<<"DILIP\n";
    fun(i+1,n);
}

int main(){
    int n;
    cin>>n;
    fun(1,n);
}