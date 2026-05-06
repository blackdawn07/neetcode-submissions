class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        for(int i {} ; i < strs.size() ; i++ ){
            vector<string> v;
           for(int j = i+1 ; j < strs.size() ; j++){
            string s1 = strs[j];
            string s2 = strs[i];
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
              if(s1==s2 && s2 != "-1"){
                 v.push_back(strs[j]); 
                 strs[j] = "-1";
              }
           }
           if(strs[i]!="-1"){
            v.push_back(strs[i]);
            ans.push_back(v);
           }
        }
        return ans;
    }
};
