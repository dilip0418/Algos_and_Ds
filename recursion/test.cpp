/* #include<bits/stdc++.h>
using namespace std;

/* int main(){
    vector<string> b(4);
    string s(4,'.');

    for(int i=0;i<4;i++){
        b[i] = s;
        cout<<b[i]<<"\n";
    }
    return 0;

} */

// int main(){
//     vector<int> dist(3);
//         for(auto i:dist){
//             dist[i] = 1;
//         }
//         for(auto i:dist){
//             cout<<dist[i]<<" "<<i<<" "<<endl;
//         }
// } */


#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int friends,int time,vector<int> &a,vector<int> &ans){
    // vector<int> ans;
    
    int n = 0;
    
    int i = 0;
    while(n != time){
        if(i<a.size()) i++;
        else i--;
        n++;
        cout<<a[i]<<" "<<a[i+1];
    }
    ans.push_back(a[a.size() - i - 1]);
    ans.push_back(a[n-(i-1)-1]);
    return ans;
}


int main(){
    int friends;
    cin>>friends;
    int c;
    cin>>c;
    vector<int> a;
    for(int i = 0;i<friends;i++){
        a.push_back(i+1);
    }
    vector<int> ans;
    solve(friends,c,a,ans);
    // for(int i: ans) cout<<i;
}





