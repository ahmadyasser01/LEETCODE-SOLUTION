class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0,j=height.size()-1;
        int area=-1;
        while(i<j){
            int curr = (j-i) * min(height[i],height[j]);
            area= max(area,curr);
            if(height[i]<height[j]) i++;
            else j--;
        }
        
        return area;
    }
};