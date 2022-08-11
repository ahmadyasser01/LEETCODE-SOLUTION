class Solution {
public:
    int largestPerimeter(vector<int>& sticks) {
        sort(sticks.begin(),sticks.end());
    int max_perm = 0;
    for(int i=0;i<sticks.size()-2;i++)
    {
        int a = sticks[i];
        int b = sticks[i+1];
        int c = sticks[i+2];
        if(a+b>c && b+c>a && a+c>b){
            int perm = a+b+c;
            max_perm = max(max_perm,perm);
        }
    }
    return max_perm;
    }
};