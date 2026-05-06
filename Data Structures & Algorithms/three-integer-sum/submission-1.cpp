class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>> s;
        int n = nums.size();
     for(int i {} ;i<n ; i++){
        for(int j = i+1; j<n ;j++){
            for(int k = j+1 ; k<n ; k++){
                  if(nums[i]+nums[j]+nums[k] ==0){
                       vector<int> v = {nums[i],nums[j],nums[k]};
                       sort(v.begin(),v.end());

                       if(s.find(v)==s.end()){
                        ans.push_back(v);
                        s.insert(v);
                       }
            }
        }
      }
    }
    return ans;
    }
};
