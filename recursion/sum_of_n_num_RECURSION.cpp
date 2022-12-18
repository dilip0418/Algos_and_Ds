#include<iostream>
using namespace std;


/* Without return value */
// void sum_of_n_num (int i,int sum){
//     if(i < 1){
//         cout << sum;
//         return;
//     }
//     sum_of_n_num(i-1,sum+i);
// }

/* With return value */
int sum_of_n_num(int n)
{
    // int sum = 0;
    if(n == 0) return n;
    return n + sum_of_n_num(n-1);
    
}
int main(){
    // sum_of_n_num(4,0);
    cout<<sum_of_n_num(5);
    return 0;
}