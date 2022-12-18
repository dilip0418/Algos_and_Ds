#include<bits/stdc++.h>
using namespace std;

int EuGCD(int m,int n,int r){
    if(n == 0) return m;
    return EuGCD(n,r,m%n);
}

int main() {
    int m,n;
    cout << "Enter two numbers m,n: "<<endl;
    cin >>m>>n;
    (m < n) ? swap(m,n) : swap(m,m);
    cout<<"the gcd of "<<m <<","<<n<<" is "<<EuGCD(m,n,0);
    return 0;

}