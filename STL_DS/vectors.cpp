#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vector; 
    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    vector.push_back(40);

    vector.pop_back(); //deletes an item from the last (Note: vector is similar to a traditional array but dynamic in nature)
    for(auto i : vector) cout<< i << " ";
    return 0;
}