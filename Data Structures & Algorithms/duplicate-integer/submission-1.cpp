class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool result = false;
        unordered_map<int,int> mp;
        for(int i {} ; i <nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(auto at: mp){
            if(at.second > 1 ){
                result = true;
                break;
            }
        }
        return result;
    } 
};