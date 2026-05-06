class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind =-1;
        int i = 0, j = nums.size()-1;

        while(i<=j){
            int mid  = i+ (j-i)/2 ;
            if(nums[mid]>target)j=mid-1;
            else if(nums[mid]<target)i = mid+1;
            else {
                ind = mid;
                break;
            }
        }
        return ind;
    }
};
