class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        for(int i {} ; i < n ; i++ ){
            for(int j {} ; j < n ; j++){
                 if(words[j].find(words[i]) != string::npos && i!=j){
                     ans.push_back(words[i]);
                     break;
                 }
            }
        }
        return ans;
    }
};