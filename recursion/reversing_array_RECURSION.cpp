#include<bits/stdc++.h>
#include<iostream>
using namespace std;


/* USING TWO POINTER (L & R) APPROACH */
void reverseArray(int l,int r,int a[]){
    if(l >= r) return;
    swap(a[l],a[r]);
    reverseArray(l+1,r-1,a);
} 

/* USING ONE POINTER APPROACH */
/* void reverseArray(int a[], int n,int i){
    if(i >= n/2) return;
    swap(a[i],a[n-i-1]);
    reverseArray(a,n,i+1);
}
 */


int main(){
    int n;
    cout<<"Enter the number of elements you want: "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Array before reversing"<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    reverseArray(0,n-1,a);
    // reverseArray(a,n,0);

    cout<<"Array after reversing"<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}