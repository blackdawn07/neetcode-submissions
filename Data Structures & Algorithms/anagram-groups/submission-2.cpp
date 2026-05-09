class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        for(int i {} ; i < n; i++){
            if(strs[i] == "-1")continue;
            string s1 = strs[i];
            sort(s1.begin(),s1.end());
            vector<string> ana;
            ana.push_back(strs[i]);
            for(int  j = i+1 ; j < n ; j++){
                   string s2= strs[j];
                   sort(s2.begin(),s2.end());

                   if(s1==s2 && strs[j] != "-1")
                   {
                       ana.push_back(strs[j]);
                       strs[j] ="-1";
                   }
            }
            ans.push_back(ana);
        }
        return ans;
    }
};
