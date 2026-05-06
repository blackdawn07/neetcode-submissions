class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i=0,j= 0;
        int n = nums1.size(),m = nums2.size();
        double ans = 2.5;
        while(i<n && j <m){
            if(nums1[i] < nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                 v.push_back(nums2[j]);
                j++;
            }
        }
        if(i!=n){
        for(int k =i ; k <n ; k++)
             v.push_back(nums1[k]);
        }
        if(j!=m){
              for(int k =j ; k <m ; k++)
               v.push_back(nums2[k]);
        }
        if((n+m)%2==0){
            ans = (v[((n+m)-1)/2] + v[(n+m)/2])/2.0;
        }
        else{
            ans = (v[(n+m)/2]);
        }
        return ans;
    }
};
