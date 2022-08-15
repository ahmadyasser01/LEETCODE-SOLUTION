class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int z =0;
        int product=1;
        for(int i=0;i<nums.size();i++)
           {
            if (nums[i]==0){ z++;}
            if(nums[i]!=0 && z<2){ product*= nums[i];}
            else if(z>=2) {
                product = 0;
                vector<int> zeros(nums.size(),0);
                return zeros;
            }
           
           }
        
        vector<int>ans;
        
        for(auto x:nums)
          { 
           if(x==0 && z<2) ans.push_back(product);
            else {
                if(z>0) ans.push_back(0);
                else ans.push_back(product/x);
            }
              }
        return ans;
    }
};