#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> stack; 
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    while(!stack.empty()){
        cout<< stack.top()<<" ";
        stack.pop(); // deletes an item at the top 'LIFO'
    }
    return 0;
}