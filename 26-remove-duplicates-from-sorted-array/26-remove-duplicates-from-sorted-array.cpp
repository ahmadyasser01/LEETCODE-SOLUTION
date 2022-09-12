class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
         while(i<nums.size() && nums[i] == nums[j]) {
           i++;
         }
            if(i>=nums.size()) break;
            nums[++j] = nums[i];
        }
        int n = nums.size()-1;
        while(n!=j){
            n--;
            nums.pop_back();
        }
        
        return nums.size();
        
       
    }
};