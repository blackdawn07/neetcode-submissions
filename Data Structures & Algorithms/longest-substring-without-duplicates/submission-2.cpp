class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        cout << n  << endl;
        int mx = 0;
        for(int i {} ; i < n ; i++){
          unordered_map<char,int> mp;
            for(int j = i ; j < n ; j++){
              if (mp[s[j]] > 0)break;
              mx = max(mx,j-i+1);
              mp[s[j]]++;
            }
        }
        return mx;
    }
};
