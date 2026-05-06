class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> pfix;
        int sum = 0;

        for(int i {} ; i < nums.size() ; i++){
            sum += nums[i];
            pfix.push_back(sum);
        }
        int j = pfix.size()-1;
        int cov =-1;
        int mx = INT_MIN;
        int mn = INT_MAX;
        while(j>=0){
           if(pfix[j] > mx && pfix[j]>=0){
            mx = pfix[j];
           // cout << "mx : " << mx << endl;
            cov = j;
           }
           j--;
        }
        if(mx==INT_MIN){
            //cout << "yes:" << endl;
            j = 0;
            while(j<nums.size()){
             if(nums[j] > mx){
             mx = nums[j];
           } 
           j++;
         }
         return mx;
        }
        //cout << "cov :" << cov << endl;
        for(int i {} ; i < cov ; i++){
            if(pfix[i] < mn && pfix[i] < 0){
                mn = pfix[i];
            }
        }
       // cout << "mx :" << mx << " mn: " << mn << endl;
        if(mn == INT_MAX)return mx;
        else return mx-mn;
    }
};


