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
        int p =1;
        for(int i {} ;  i < temp.size()-1 ;i++){
           if(temp[i+1]-temp[i]==1){
              p +=1;
              mx = max(p,mx);
           }
           else p =1;
        } 
        return mx;
    }
};
