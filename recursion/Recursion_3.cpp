//Print 1 to N using recursion (BACK-TRACKING)

#include<iostream>
using namespace std;


void fun(int n){
     
    if(n == 0) return;

    fun(n-1);
    cout << n <<" ";
}

int main(){
    int n=3;
    // cin>>n;
    fun(n);
    return 0;
}