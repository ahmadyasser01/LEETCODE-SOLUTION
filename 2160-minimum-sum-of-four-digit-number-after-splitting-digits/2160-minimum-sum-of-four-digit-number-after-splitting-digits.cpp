class Solution {
public:
    int minimumSum(int num) {
        string str = to_string(num);
        vector<int> ans;
        for(auto x : str ){
            ans.push_back(x - '0');
            
        }
        sort(ans.begin(),ans.end());
        int sum= 0;
        int i=0,j=ans.size()-1;
        while(i<j)
        {
           sum+= ans[i++] *10 + ans[j--];
        }
        return sum;
        
    }
};