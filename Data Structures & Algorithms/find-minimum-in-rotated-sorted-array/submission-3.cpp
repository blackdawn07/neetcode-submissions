class Solution {
public:
    int findMin(vector<int> &nums) {
        int mn = nums[0];
        int i = 0,j = nums.size()-1;
///[3,4,5,6,1,2]
        while(i<j){
            int mid = (i+j)/2;
            //cout << mid << endl;
            if(nums[mid] < mn)mn = nums[mid];
            if(j-i==1){
                if(nums[j] < mn)mn = nums[j];
                break;
            }
            if(nums[i]>nums[j] && nums[i]>nums[mid]){
                j=mid;
            }
            else if(nums[j]>nums[i] && nums[j]>nums[mid]){
               i=mid;
            }
            else{
              if(nums[i]>nums[j])i =mid;
              else j = mid;
            }
        }
        return mn;

    }
};
