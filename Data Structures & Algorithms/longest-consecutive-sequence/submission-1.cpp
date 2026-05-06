class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        int mx = 1;
        if(nums.size()==0)return 0;
        for(int i {} ; i < nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> temp;
        for(auto at: mp)temp.push_back(at.first);
        for(int i {} ; i < temp.size() ; i++){
            int c= 1;
            for(int j = i ; j < temp.size()-1; j++){
                if(temp[j+1]-temp[j]==1) c++;
                else break;
                }
                if(c>mx)mx=c;
        }
        return mx;
    }
};
