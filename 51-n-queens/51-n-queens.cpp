class Solution {
public:
    unordered_map<int,bool> col;
    unordered_map<int,bool> p_diag;
    unordered_map<int,bool> n_diag;
    
    void solve( vector<string>& board,vector<vector<string>> & ans,int r,int n){
        if(r==n){
            ans.push_back(board);
            return;
        }
        
        for(int c=0;c<n;c++){
            if(col[c] || p_diag[r+c] || n_diag[r-c]) continue;
            
            col[c] = true;
            p_diag[r+c] = true;
            n_diag[r-c] = true;
            board[r][c] = 'Q';
            solve(board,ans,r+1,n);
             col[c] = false;
            p_diag[r+c] = false;
            n_diag[r-c] = false;
            board[r][c] = '.';
            
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        
    vector<vector<string>> ans;
    vector<string> board(n,string(n,'.'));
    solve(board,ans,0,n);
        
    return ans;
        
    }
};