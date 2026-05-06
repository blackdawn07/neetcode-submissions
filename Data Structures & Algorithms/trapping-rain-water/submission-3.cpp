class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }
        int n = height.size();
        int res = 0;
        int lmx = -1;
        int rmx = -1;

        vector<int> lmax;
        vector<int> rmax(height.size());
        for(int i {} ; i < n ; i++){
           if(height[i]>lmx)lmx = height[i];
           lmax.push_back(lmx);
        }
        for(int j = height.size()-1 ; j >=0  ; j--){
           if(height[j]>rmx)rmx = height[j];
          rmax[j]= rmx;
        }

       

        for (int i = 0; i < height.size(); i++) {
            int leftMax = lmax[i];
            int rightMax = rmax[i];

            res += min(leftMax, rightMax) - height[i];
        }
        return res;
    }
};