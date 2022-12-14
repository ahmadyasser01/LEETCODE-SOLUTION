class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> map;
        
        for(auto x:nums)
        {
            if(map[x]) return true;
            map[x] = true;
        }
        return false;
    }
};