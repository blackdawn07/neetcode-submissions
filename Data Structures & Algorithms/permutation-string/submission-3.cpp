class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       unordered_map<char,int> mp;
       unordered_map<char,int> copy;
       bool ans = false;
       int i = 0;
       if(s2.size()<s1.size())return false;
       for(auto at : s1)mp[at]++;
       while(i<= (s2.size()-s1.size())){
        cout << i << endl;
        int c = 0;
        copy = mp;
       for(int k = i ; k < s1.size()+i ;k++){
           if(copy[s2[k]]== 0)break;
               else{
                 copy[s2[k]]--;
                 c++;
               }
        }
        if(c==s1.size()){
                ans = true;
                break;
        }
        i++;
       }
    return ans; 
    }
};
