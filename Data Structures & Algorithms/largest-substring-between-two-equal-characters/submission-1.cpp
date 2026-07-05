class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
      vector<int> cnt(26);
      vector<int>  diff(26);
      map<char,int> mp;

      for(int i{} ; i < s.length() ; i++){
         if(cnt[s[i]-'a']==0)
          diff[s[i]-'a']= i;
        cnt[s[i]-'a']++;
      } 
      for(int i = s.length()-1 ; i >=0 ; i--){
        if(mp.find(s[i]) != mp.end())continue;
        diff[s[i]-'a']= i-diff[s[i]-'a'];
        mp[s[i]]++;
      }
      for(auto at : cnt)cout << at << " ";
      cout << endl;
       for(auto at : diff)cout << at << " ";
      int mx = -1; 
      for(int i {} ; i < 26 ; i++){
        if(cnt[i]>=2)mx= max(diff[i],mx);
      }
      
      if(mx!=-1)
       return mx-1;
    else return mx;
    }
};