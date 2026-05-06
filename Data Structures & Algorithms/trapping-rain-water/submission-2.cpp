
        class Solution {
public:
    int trap(vector<int>& height) {
        int s = height.size();
        int sum = 0;
        int i = 0;

        while (i < s - 1) {
            int ind = -1;
            int temp = 0;

            int mx = -1, mxInd = -1;
            for (int j = i + 1; j < s; j++) {
                if (height[j] > mx) {
                    mx = height[j];
                    mxInd = j;
                }
                if (height[j] >= height[i]) {
                    ind = j;
                    break;
                }

                temp += height[j]; 
            }
            if (ind == -1) {
                ind = mxInd;
                temp = 0;
                for (int k = i + 1; k < ind; k++) {
                    temp += height[k];
                }
            }

            if (ind == -1) break; 
            sum += (min(height[i], height[ind]) * (ind - i - 1)) - temp;

            i = ind;
        }

        return sum;
    }
};
