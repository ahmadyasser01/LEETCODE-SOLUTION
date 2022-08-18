class Solution {
public:
    vector<string> ans;
    unordered_map<char,string> map ={
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9', "wxyz"}
    };
    void backtrack(int i,string curr,string digits){
        if(curr.length()==digits.length()){
            ans.push_back(curr);
            return;
        }
        for(auto x: map[digits[i]]){
            backtrack(i+1,curr+x,digits);
        }
    }
    vector<string> letterCombinations(string digits) {
        string curr = "";
        if (digits.length()>0)
        backtrack(0,curr,digits);
        return ans;
        
    }
};