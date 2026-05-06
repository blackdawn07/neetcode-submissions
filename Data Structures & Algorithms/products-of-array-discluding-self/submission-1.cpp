class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n= nums.size(),p=1,z =0,ind=0;
       vector<int> ans(n);
      
       for(int i {} ; i < n ; i++){
        if(nums[i]==0){
            ind = i;
            z++;
        }
        else p *= nums[i];
       }
       if(z==1){
           ans[ind] = p;
       }
       else if(z==0){
       for(int i  {} ; i < n ; i++) ans[i] =p/nums[i];
       }
    return ans;
 }
};
