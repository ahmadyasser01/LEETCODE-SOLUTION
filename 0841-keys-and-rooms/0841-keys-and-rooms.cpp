class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int> q;
        int ans=0;
        vector<bool> vis(n,false);
        
        q.push(0);
        vis[0]= true;
        
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            ans++;
            for(int x : rooms[p])
            {
                if(!vis[x])
                {
                    q.push(x);
                    vis[x]= true;
                }
            }
        }
       return n == ans?true:false;
        
    }
};