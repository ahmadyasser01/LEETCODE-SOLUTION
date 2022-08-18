class Solution {
public:
    vector<vector<int>>ans;
    
    void backtrack(vector<int>arr,vector<int> &curr,int indx,int total,int target){
        if(total == target){
            ans.push_back(curr);
            return;
        }
        if(total>target || indx >= arr.size()) return;
        
        int prev =-1;
        for(int i=indx;i<arr.size();i++){
            if(prev == arr[i]) continue;
            curr.push_back(arr[i]);
            backtrack(arr,curr,i+1,total+arr[i],target);
            curr.pop_back();
            prev = arr[i];
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int> curr;
        sort(arr.begin(),arr.end());
        backtrack(arr,curr,0,0,target);
        return ans;
    }
};