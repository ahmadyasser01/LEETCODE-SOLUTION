class Solution {
public:
    void backtrack(int i,int &res,int&exor,vector<int>&nums,int n){
        if(i==n){
            res += exor;
            return;
        }
        exor ^=nums[i];
        backtrack(i+1,res,exor,nums,n);
        exor ^=nums[i];
        backtrack(i+1,res,exor,nums,n);

    }
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        int exor=0;
        backtrack(0,res,exor,nums,nums.size());
        return res;
    }
};