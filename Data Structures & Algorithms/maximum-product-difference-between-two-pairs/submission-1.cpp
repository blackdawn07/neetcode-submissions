class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mx1 = 0,mx2=0, mn1 = INT_MAX, mn2 = INT_MAX;
        for(int n : nums){
            if(n> mx1){
                mx2= mx1;
                mx1= n;
            }
            else if(n>mx2){
              mx2=n;
            }
            if(n < mn1){
                mn2= mn1;
                mn1= n;
            }
            else if(n < mn2){
                mn2= n;
            }
        }
        return (mx1*mx2)-(mn1*mn2);
    }
};