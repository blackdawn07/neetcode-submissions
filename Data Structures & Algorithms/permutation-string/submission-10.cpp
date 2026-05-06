class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int matches =0;
        vector<int> v1(26);
        vector<int> v2(26); 
        
        if(s1.size()>s2.size())return false;
        for(int i {} ; i < s1.size(); i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        for(int i {} ;i < 26 ; i++){
          if(v1[i]==v2[i])matches++;
        }
        if(v1==v2)return true;
        for(int i=1 ; i < s2.size();i++){
            if(matches==26)return true;
            if(i+s1.size()-1 < s2.size()){
                
                if(v1[s2[i-1]-'a']==v2[s2[i-1]-'a'])matches--; 
                v2[s2[i-1]-'a']--;
                if(v1[s2[i-1]-'a']==v2[s2[i-1]-'a'])matches++; 
                if(v2[s2[i+s1.size()-1]-'a']==v1[s2[i+s1.size()-1]-'a'])matches--;
                v2[s2[i+s1.size()-1]-'a']++;
                if(v2[s2[i+s1.size()-1]-'a']==v1[s2[i+s1.size()-1]-'a'])matches++;
            }
            else break;
        }
        return matches==26;
        
    }
};
