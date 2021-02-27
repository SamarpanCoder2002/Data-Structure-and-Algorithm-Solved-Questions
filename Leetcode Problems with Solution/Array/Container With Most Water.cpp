class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int curr,max=0;
        while(i<j){
            curr = (j-i) * min(height[i],height[j]);
            if(curr>max)
                max=curr;
            if(height[i]<=height[j])
                i++;
            else
                j--;
        }
        return max;
    }
};
