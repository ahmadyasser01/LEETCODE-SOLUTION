class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n+1,0);
        vector<int> outDegree(n+1,0);
        if(trust.size()==0 && n==1 ) return 1;
        for(auto i : trust)
        {
            inDegree[i[1]]++;
            outDegree[i[0]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(outDegree[i]==0 && inDegree[i]==n-1) return i;
        }
        
        return -1;

    }
};