class Solution {
public:
    bool dfs(unordered_map<int, vector<int>>& graph,int source,int destination, vector<bool> &vis){
        if(source == destination)  return true;
        if(!vis[source]){
                    vis[source] = true;

                for(auto& node : graph[source])
        {
             if( dfs(graph,node,destination,vis)) return true;
        }
        }
    
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       vector<bool> vis(n,false);
        unordered_map<int, vector<int>> graph;
        for(auto &x: edges)
        {
            graph[x[0]].push_back(x[1]);
           graph[x[1]].push_back(x[0]);

            
        }
        return dfs(graph,source,destination,vis);
       
    }
};