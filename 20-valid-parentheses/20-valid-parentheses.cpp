class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char,char> valid ={
            {'(' , ')' },
            {'[', ']'},
            {'{','}'}
        };
        for(auto x:s)
        {
            if(x =='(' || x =='[' || x =='{')
                stk.push(x);
            else {
                if(stk.empty()) return false;
                char y = stk.top();
                stk.pop();
                if (x !=valid[y]) return false;
            }
        }
        if (stk.size()>0) return false;
        else return true;
        
    }
};