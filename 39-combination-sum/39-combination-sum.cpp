class Solution {
public:
    vector<vector<int>>ans;
    
    void backtrack(vector<int>arr,vector<int> &curr,int indx,int total,int target){
        if(total == target){
            ans.push_back(curr);
            return;
            
        }
        if(total>target || indx >= arr.size()) return;
        curr.push_back(arr[indx]);
        backtrack(arr,curr,indx,total+arr[indx],target);
        curr.pop_back();
        backtrack(arr,curr,indx+1,total,target);

        
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> curr;
        backtrack(arr,curr,0,0,target);
        return ans;
    }
};