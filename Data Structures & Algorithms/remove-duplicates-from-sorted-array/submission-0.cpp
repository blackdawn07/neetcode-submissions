class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int last_picked =  nums[0];
       int i = 1,j=1;
       while(j<nums.size()){
         if(nums[i] > last_picked ){
            last_picked = nums[i];
            i++;
            }
         if(nums[j] > last_picked && nums[i] <= last_picked ){
              swap(nums[i],nums[j]);
              last_picked = nums[i];
              i++;
         }
         
         j++;
       }  
       return i;      
    }
};