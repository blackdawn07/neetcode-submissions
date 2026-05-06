class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
       vector<int> ans(n);
       for(int i {} ; i < n ; i++){
        int p = 1;
         for(int j {} ; j <n ; j++){
           if(j!=i){
              p *= nums[j];
           }
       }
       ans[i] =p;
    }
    return ans;
 }
};
