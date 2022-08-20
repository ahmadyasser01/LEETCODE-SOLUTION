class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> q;
    int ck;
    KthLargest(int k, vector<int>& nums) {
        ck = k;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
            if(q.size()>ck) q.pop();
        }
        
    }
    
    int add(int val) {
       
       if(q.empty() || q.size()<ck) q.push(val);
        else if (val>=q.top() || q.size()> ck)
        {
            q.pop();
            q.push(val);
        }
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */