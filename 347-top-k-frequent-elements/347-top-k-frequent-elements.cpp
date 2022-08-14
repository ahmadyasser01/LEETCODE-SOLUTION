class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> ans;
    priority_queue<pair<int,int>> p;
        for(auto x:nums){
            map[x]++;
        }
        
        for(auto const &[key,val]: map){
            p.push({val,key});
        }
        
        while(!p.empty() && k){
            pair<int,int> temp = p.top();
            p.pop();
            ans.push_back(temp.second);
            k--;
        }
        
        return ans;
    }
};