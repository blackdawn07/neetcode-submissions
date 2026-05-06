class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> pfix;
        int sum = 0;
        int j = nums.size()-1;
        int cov =-1;
        int mx_neg = INT_MIN;
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i {} ; i < nums.size() ; i++){
            if(nums[i] > mx_neg)
                mx_neg = nums[i];
            sum += nums[i];
            pfix.push_back(sum);
        }
        while(j>=0){
           if(pfix[j] > mx && pfix[j]>=0){
            mx = pfix[j];
            cov = j;
           }
           j--;
        }
        for(int i {} ; i < cov ; i++){
            if(pfix[i] < mn && pfix[i] < 0){
                mn = pfix[i];
            }
        }
        if(mx == INT_MIN)return mx_neg;
        if(mn == INT_MAX)return mx;
        else return mx-mn;
    }
};


