/* Print N - 1 numbers using recursion (BACK-TRACKING)  */

#include<iostream>
using namespace std;

void fun(int i,int n){
    if(i > n) return;
    fun(i+1,n);
    cout << i <<" ";
}

int main(){
    fun(1,4);
    return 0;
}