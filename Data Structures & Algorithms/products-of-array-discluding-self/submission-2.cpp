class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n= nums.size();
       vector<int> pfix(n);
       vector<int> sfix(n);
       vector<int> ans(n);
       int p = 1;
       //Prefix Array
       for(int i = 0 ; i <n ; i++){
        if(i==0) pfix[i]=1;
        else{
        p *= nums[i-1];
        pfix[i] =  p;
        }
       }
       p=1;
       //Suffix array
       for(int i = n-1; i>=0 ; i--){
        if(i==n-1)sfix[n-i-1]=1;
        else{
          p *= nums[i+1];
          sfix[n-i-1] =  p;
        }
       }
    //    for(auto at : pfix)cout << at << " ";
    //    cout << endl;
    //    for(auto at: sfix)cout << at << " ";
    //    cout << endl;
    for(int i {} ; i < n ; i++){
        ans[i] = pfix[i]*sfix[n-i-1];
    }
    return ans;
 }
};
