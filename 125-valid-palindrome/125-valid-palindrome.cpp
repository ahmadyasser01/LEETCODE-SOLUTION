class Solution {
public:
    bool isNum(char c){
        return c>=48 && c<=57;
    }
    bool isAlpha(char c){
        return (c>=65 && c<=90) || (c>=97 &&c<=122);
    }
    bool isValid(char c) {
        return isNum(c) || isAlpha(c);
    }
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        
        while(i<j){
            while(!isValid(s[i]) && i<j) i++;
            while(!isValid(s[j])  && i<j) j--;
            if(tolower(s[i])!= tolower(s[j])) return false;
            i++;
            j--;
            
        }
        return true;
    }
};