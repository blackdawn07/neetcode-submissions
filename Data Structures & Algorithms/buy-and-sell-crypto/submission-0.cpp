class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        
        for(int i {} ; i < prices.size();i++){
            for(int j = i+1 ; j < prices.size();j++){
             mx = max(prices[j]-prices[i],mx);
            }
        }
        return mx;
    }
};
