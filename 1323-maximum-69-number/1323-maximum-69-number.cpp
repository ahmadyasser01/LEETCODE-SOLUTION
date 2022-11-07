class Solution {
public:
    int maximum69Number (int num) {
        int numCopy = num;
        int idx = -1;
        int dig=0;
        while(numCopy >0)
        {
         if(numCopy%10==6) 
             idx = dig;
          numCopy/=10;
            dig++;
        }
        
        return idx ==-1?num: num + 3 * (int) pow(10,idx);
    }
};