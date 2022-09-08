class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        unordered_map<char,bool>map;
        int max_len = 1;
        int i=0,j=0;
        while(j<s.length())
        {
           
        while(map[s[j]]== true&&i<j)
        {
            map[s[i]] = false;
            i++;
        }
            map[s[j]] = true;
            max_len =max(max_len,j-i+1);
            j++;
        }
        return max_len;
        
    }
};