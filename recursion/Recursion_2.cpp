#include<iostream>
using namespace std;

void fun(int i, int n){
    if(i < 1){
        return;
    }
    cout<<i<<" ";
    fun(i-1,n);
}

int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    fun(n,n);
}