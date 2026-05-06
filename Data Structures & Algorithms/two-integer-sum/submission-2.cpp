class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int size = nums.size();
        unordered_map<int,int> mp;
        for(int i {} ; i < size; i++){
            mp[nums[i]]= i;
        }
        for(int i{} ;i < size ;i++){
            int res =  target-nums[i];
            if(nums[mp[res]] + nums[i] == target && mp[res] != i){
                ans.push_back(i);
                ans.push_back(mp[res]);
                break;
            }
        }
        return ans;
    }
};
