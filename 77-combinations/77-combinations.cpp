class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int start,vector<int> &curr,int k,int n){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        for(int i=start;i<=n;i++)
        {
            curr.push_back(i);
            backtrack(i+1,curr,k,n);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;
        backtrack(1,curr,k,n);
        return ans;
    }
};