class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size()-1;
        int l= 0 , r = n, mid= 0;
        if(nums.size()<=2){
            if(n==0)return 0;
            else{
                if(nums[0]>nums[1])return 0;
                else return 1;
            }
        }
        while(l<=r){
            //cout << "enter" << endl;
             mid = (l+r)/2;
             //cout << mid  << endl;
            if(mid==0||mid==n|| (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]))return mid;
            if(nums[mid-1]>nums[mid])r=mid;
            else l = mid+1;   
        }
        return mid;
    }
};