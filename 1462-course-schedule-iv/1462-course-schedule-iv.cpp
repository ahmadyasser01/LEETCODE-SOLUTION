class Solution {
public:

    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& preq, vector<vector<int>>& queries) {
       vector<int>in(n,0);
        queue<int> q;
        vector<vector<int>> graph(n);
        vector<bool>ans;
        vector<vector<bool>> table(n,vector<bool>(n,false));
        for(auto x: preq)
        {
            in[x[1]]++;
            graph[x[0]].push_back(x[1]);
        }
        for(int i=0;i<n;i++)
        {
            if(in[i]==0) q.push(i);
        }
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(auto &node : graph[p])
            {
                table[p][node] = true;
                for(int i=0;i<n;i++)
                {
                    if(table[i][p]== true) table[i][node] = true;
                }
                in[node]--;
                if(in[node]==0) q.push(node);
            }
        }
        for(auto query:queries)
        {
             ans.push_back(table[query[0]][query[1]]);
        }
        return ans;
    }
};