class Solution {
public:
    int appendCharacters(string s, string t) {
      int ind  =0, c = 0;
      int n = s.length();
      for(int i {} ; i < n ; i++){
        if(ind >= n)break;
        if(s[i]==t[ind]){
          c++;
          ind++;
        }
      }
      return t.length()-c;
    }
};