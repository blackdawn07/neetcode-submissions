class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0 , i = 0,j=i;
        int n = s.size();
        unordered_map<char,int> mp;
        while(j < n){
            if(mp[s[j]] > 0){
               while(i<j && s[i]!=s[j]){
                 mp[s[i]]--;
                 i++;
               }
               mp[s[i]]--;
               i++;
            }
            res = max(res, j-i+1);
            mp[s[j]]++;
            j++;
        }
        return res;
    }
};