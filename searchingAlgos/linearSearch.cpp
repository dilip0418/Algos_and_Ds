#include<bits/stdc++.h>

using namespace std;
int linearSearch(int arr[], int N, int key){
    for(int i = 0; i < N; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,12,14,121,91};
    // int key = 4;
    int key = 20;
    int N = sizeof(arr) / sizeof (arr[0]);
    cout<< linearSearch(arr, N, key);
    return 0;
}

// Time complexiety : O( N )
