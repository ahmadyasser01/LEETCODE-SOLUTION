class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0;
        int starting =0;
        int check=0;
        
        for(int i=0;i<gas.size();i++)
        {
            total+=gas[i]-cost[i];
            if(total<0){
                total = 0;
                starting = i+1;
            }
            check +=gas[i]-cost[i];
        }
        if(check>=0) return starting;
        else return -1;
        
    }
};