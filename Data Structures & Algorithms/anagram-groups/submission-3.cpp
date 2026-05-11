class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,int> mp;
        unordered_map<string,int> fmp;
        
        for(int i =0 ; i < n; i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s]++; 
        }
        for(auto at : mp){
            fmp[at.first] = fmp.size(); 
        }
        vector<vector<string>> ans(fmp.size());
        for(int i {} ; i <n ; i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            ans[fmp[s]].push_back(strs[i]);
        }
        return ans;
    }
};
