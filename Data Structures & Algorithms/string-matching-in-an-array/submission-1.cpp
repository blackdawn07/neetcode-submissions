class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        unordered_map<string,int> mp;
        unordered_set<string> st;
        for(int i {}; i < n ; i++)mp[words[i]]++;
        for(int i {} ; i < n ; i++){
            mp[words[i]]--;
            if (mp[words[i]] == 0) mp.erase(words[i]);
         for(int j {} ; j <  words[i].length(); j++ ){
            string temp;
            for(int k = j ; k < words[i].length(); k++ ){
                temp +=  words[i][k];
                if(mp.count(temp)) {
                        st.insert(temp);
                    };
            }
         }
         mp[words[i]]++;
    }
    return vector<string>(st.begin(),st.end());
    }
};