class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> nodes(n);
        vector<int> ans;
        for(auto& x:edges)
        {
            nodes[x[1]] = 1;
        }
        for(int i=0;i<n;i++)
        {
           if(nodes[i]== 0) ans.push_back(i);
        }
        return ans;
    }
};