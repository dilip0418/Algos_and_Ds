#include<bits/stdc++.h>
using namespace std;

/* bool isSafe(int row, int col,vector<string> board,int n){
    int dupRow = row,dupCol = col;
    while(row>=0 && col>=0){
        if(board[row][col] == 'Q') return false;
        row--;
        col--;
    }
    row = dupRow;
    col = dupCol;
    while(row<n && col>=0){
        if(board[row][col] == 'Q') return false;
        row++;
        col--;
    }
    row = dupRow;
    col = dupCol;
    while (col>=0)
    {
        if(board[row][col] == 'Q') return false;
        col--;
    }
    return true;
}

void NQueens(int n,int col,vector<vector<string>> &ans,vector<string> &board){
    if(col == n){
        ans.push_back(board);
        return;
    }
    for(int row = 0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col] ='Q';
            NQueens(n,col+1,ans,board);
            board[row][col] = '.';
        }
    }   
} */

void NQueens(int n,int col,vector<vector<string>> &ans,vector<string> &board,vector<bool> &lowerDiagonal,vector<bool> &upperDiagonal,vector<bool> &leftRow){
    if(col == n){
        ans.push_back(board);
        return;
    }
    for(int row = 0; row < n; row++){
        if(leftRow[row] == 0 && lowerDiagonal[row+col] == 0 && upperDiagonal[(n-1) + (col - row)] == 0){
            board[row][col] = 'Q';
            leftRow[row] = 1;
            lowerDiagonal[row+col] = 1;
            upperDiagonal[(n-1) + (col - row)] = 1;
            NQueens(n,col+1,ans,board,lowerDiagonal,upperDiagonal,leftRow);
            board[row][col] = '.';
            leftRow[row] = 0;
            lowerDiagonal[row+col] = 0;
            upperDiagonal[(n-1) + (col - row)] = 0;
        }
    }
}
vector<vector<string>> solveNQueens(int n){
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    vector<bool> leftRow(n);
    vector<bool> lowerDiagonal(2*n);
    vector<bool> upperDiagonal(2*n);

    for(int i=0;i<n;i++){
        board[i] = s;
    }

    NQueens(n,0,ans,board,lowerDiagonal,upperDiagonal,leftRow);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of queen you want to place: "<<endl;
    cin>>n;
    solveNQueens(n);
    vector<vector<string>> ans;
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}