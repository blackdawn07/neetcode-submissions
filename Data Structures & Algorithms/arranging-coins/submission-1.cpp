class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1, j = n, ans =0;
        while(i<=j){
            int mid = i + (j-i)/2;
            long long sum =  (long long) mid *(mid+1)/2;
            if(sum <= n){
                ans = max(mid,ans);
                i = mid+1;
            }
            else j = mid-1;
        }
        return ans;
    }
};