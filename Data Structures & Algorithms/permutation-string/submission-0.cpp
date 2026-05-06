class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       unordered_map<char,int> mp;
       unordered_map<char,int> copy;
       bool ans = false;
       for(auto at : s1)mp[at]++;
       
       for(int i {} ; i < s2.size(); i++){
        int c= 0;
        if(ans==true)break;
        copy = mp;
        for(int j =i ; j < s2.size(); j++){
            if(j-i+1 != s1.size())continue;
            for(int k = i ; k <=j ; k++){
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

        }
       }
       return ans;
        
    }
};
