class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        if(len==0) return 0;
        unordered_map<char,int> map;
        int i=0,j=0;
        int max_len = 1;
        while(j<len)
        {
            while(map[s[j]]== true && i<j){
                map[s[i]] = false;
                i++;
            }
            map[s[j]] = true;
            max_len = max(max_len,j-i+1);
            j++;
        }
        return max_len;
        
    }
};