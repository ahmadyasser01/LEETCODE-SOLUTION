class Solution {
public:
bool ans = false;
int dx[4] = {0,1,-1,0};
int dy[4] = {1,0,0,-1};

bool valid(int nr,int nc, int m,int n){
    bool valid = (nr>-1 && nc> -1 && nr<m && nc<n);
    return valid;
}

void backtrack(int r,int c,int idx,string word,int m ,int n,string& curr,vector<vector<char>>& board,vector<vector<int>>&vis){
   
    if(!(board[r][c] == word[idx]))
        return;
    vis[r][c] = 1;
    curr.push_back(word[idx]);
    if(idx >= word.length() || curr == word){
        ans = true;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int nr = r+dx[i];
        int nc = c + dy[i];
        bool cond = valid(nr,nc,m,n)== true && vis[nr][nc]!=1;
        if(cond){
            backtrack(nr,nc,idx+1,word,m,n,curr,board,vis);
        }


    }
    vis[r][c] = 0;
    curr.pop_back();
}


bool exist(vector<vector<char>>& board, string word) {
    int m = board.size();
    int n = board[0].size();
    vector<vector<int>> vis(m,vector<int>(n,0));
    string curr = "";
    for(int i=0;i<m;i++)
    {

        for(int j=0;j<n;j++)
        {
            backtrack(i,j,0,word,m,n,curr,board,vis);

            if(ans == true) return true;
        }
    }
    return ans;

}
};