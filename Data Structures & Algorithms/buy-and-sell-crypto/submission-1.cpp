class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0,i=0,j=1;
        
        while(j<prices.size()){
            if(prices[j]-prices[i] < 0) {
                i=j;j++;
            }
            else {
                mx = max(prices[j]-prices[i],mx);
                j++;
            }
        }
        return mx;
    }
};
