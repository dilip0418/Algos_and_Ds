#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int start, int end, int key)
{
    int mid = start + (end - start)/2;
    int ans;
    while (start <= end)
    {
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }        
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return start;
} 
int lastOcc(int arr[],int start, int end, int key)
{
    int mid = start + (end - start)/2;
    int ans;
    while (start <= end)
    {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }        
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return end;
} 

int main(){
    int arr[] = {1,2,2,2,3,4,5,6};
    int key = 2;
    int N = sizeof(arr)/sizeof (arr[0]);
    pair<int, int> pair;
    pair.first = firstOcc(arr, 0, N, key);
    pair.second = lastOcc(arr, 0, N, key);

    cout<< "< "<< pair.first << ", " << pair.second << " >" << endl;
    cout<<"Number of times "<< key <<" has occured is "<< (pair.second - pair.first) + 1 << endl;
    return 0;
}