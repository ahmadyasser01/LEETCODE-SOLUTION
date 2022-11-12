class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& preq) {
        vector<int> order(n);
        vector<int>in(n,0);
        vector<vector<int>> graph(n);   
        queue<int> q;
        
       for(int i=0;i<preq.size();i++)
       {
           graph[preq[i][1]].push_back(preq[i][0]);
           in[preq[i][0]]++;
       }
        
        for(int i=0;i<n;i++)
        {
            if(in[i]==0) q.push(i);
        }
        int idx=0;
       while(!q.empty())
       {
           int p = q.front();
           q.pop();
           order[idx++] = p;
           for(auto x: graph[p])
           {
               in[x]--;
               if(in[x]==0) q.push(x);
           }
       }
        if(idx!=n) return false;
        return true;
    }
};