class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx = -1;
        int n = heights.size();
        
        int i = 0,j=n-1;
        while(i<j){
            int result = min(heights[i],heights[j]) * (j-i);
            if(result>mx)mx=result;
            if(heights[i] < heights[j])i++;
            else j--;
        }
        return mx;
    }
};
