class Solution {
public:
    int search(vector<int>& nums, int target) {
      //Find the cut 
      int l =0 , r = nums.size()-1;
      int n = nums.size();
      while(l<r){
         int  mid = l+(r-l)/2;
         if(nums[r] < nums[mid])l = mid+1;
         else r = mid;
      }
      cout << l << " " << r << endl;
      int result = binarySearch(nums,target,0,l-1);
      cout << result << endl;
      if(result != -1)return result;
      return binarySearch(nums,target,l,n-1);
         
    }
    int binarySearch(vector<int> & nums , int target , int l , int r){

        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]>target)r= mid-1;
            else l = mid+1;
        }
       return -1;
    }
};
