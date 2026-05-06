class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        int s = nums.size();

        for(int i {} ; i < s ; i++){
            int sum =0;
            for(int j = i ; j < s ; j ++){
                sum += nums[j];
                if(sum>mx)mx = sum;

            }
        }
        return mx;
    }
};
