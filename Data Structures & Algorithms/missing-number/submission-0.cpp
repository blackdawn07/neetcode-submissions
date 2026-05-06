class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum =0;
        for(auto at : nums) sum += at;
        int desired = (nums.size()* (nums.size()+1))/2;
        return desired-sum;
    }
};
