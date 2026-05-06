class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26);
        vector<int> v2(26); 

        if(s1.size()>s2.size())return false;
        for(int i {} ; i < s1.size(); i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if(v1==v2)return true;
        // for(auto at : v1)cout << at << " ";
        // cout << endl;
        // for(auto at : v2)cout << at << " ";
        // cout << endl;
        for(int i=1 ; i < s2.size();i++){
            if(v1==v2)return true;
            if(i+s1.size()-1 < s2.size()){
                v2[s2[i-1]-'a']--;
                v2[s2[i+s1.size()-1]-'a']++;
        // for(auto at : v2)cout << at << " ";
        // cout << endl;
            }
            else break;

        }
        return false;
        
    }
};
