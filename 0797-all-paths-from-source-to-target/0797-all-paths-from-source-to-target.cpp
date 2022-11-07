class Solution {
public:
  void dfs(vector<vector<int>>& graph,vector<int>&path,vector<vector<int>>& ans,int n,int node)
    {
        path.push_back(node);
        if(node == n){
            ans.push_back(path);
        }
        for(auto x : graph[node])
        {
            dfs(graph,path,ans,n,x);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n= graph.size() -1;
        vector<int>path;
        vector<vector<int>> ans;
        dfs(graph,path,ans,n,0);
        return ans;
    }
};