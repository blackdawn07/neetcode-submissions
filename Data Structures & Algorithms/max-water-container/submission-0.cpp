class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx = -1;
        int n = heights.size();
       for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n ; j++){
            int ans =  (j-i) * min(heights[i],heights[j]);
            if(ans>mx)mx= ans;
        }
       }
       return mx;  
    }
};
