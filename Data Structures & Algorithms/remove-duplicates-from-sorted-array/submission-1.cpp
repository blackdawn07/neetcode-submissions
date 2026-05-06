class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 1,j=1;
       while(j<nums.size()){
         if(nums[i] > nums[i-1] ){
            i++;
            }
         if(nums[j] > nums[i-1] && nums[i] <= nums[i-1]){
              swap(nums[i],nums[j]);
              i++;
         }
         
         j++;
       }  
       return i;      
    }
};