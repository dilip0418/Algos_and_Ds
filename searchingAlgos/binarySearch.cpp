#include<bits/stdc++.h>
using namespace std;

/* int binarySearch(int arr[],int start, int end, int key)
{
    //Iterative approach
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }        
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
} */
int binarySearch(int arr[],int start, int end, int mid, int key){
    // Recursive approach
    if (arr[mid] == key)
        return mid;
    if (start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] > key)
            binarySearch(arr, start, mid-1, mid, key);
        else if(arr[mid] < key)
            binarySearch(arr, mid+1, end, mid, key);
    }
    else
        return -1;
}
int main()
{
    int arr[] = {10,12,21,34,123};
    int key = -1;
    int N = sizeof(arr)/sizeof (arr[0]);
    int start = 0;
    int mid = start + ((N - 1) - start)/2;
    cout<< binarySearch(arr,0,N,mid, key);
    return 0;
}