class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0,j=s.length();
        vector<int> ans;
        for(auto x:s)
        {
            if(x == 'I') ans.push_back(i++);
            else if(x =='D') ans.push_back(j--);
        }
        ans.push_back(i);
            
        
        
        
return ans;
    }
};