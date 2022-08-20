typedef pair<int, vector<int>> pi;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        vector<vector<int>>ans;
        
        for(auto x: points)
        {
            double dist = x[0]*x[0]+x[1]*x[1];
            pq.push({dist,x});
        }
        
        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
        
    }
};