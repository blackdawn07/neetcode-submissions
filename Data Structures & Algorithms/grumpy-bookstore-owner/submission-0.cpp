class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int n = c.size();
        vector<int> pref;
        int sum =0;
        for(int i {} ; i < n ; i++){
          if(g[i]==0)sum+=c[i];
          pref.push_back(sum);
        }
        //sliding window
        int i=0,j=0,ans=0,temp = 0;

        while(j<n){
            temp+= c[j];
            if(j-i==m-1){
                int t = pref[n-1]+(temp-pref[j]);
                ans = max(t,ans);
                if(g[i]==1)temp-=c[i];
                i++;
            }
            j++;
        }
        return ans;
    }
};