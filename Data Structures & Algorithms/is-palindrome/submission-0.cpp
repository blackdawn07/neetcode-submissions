class Solution {
public:
    bool isPalindrome(string s) {
        int i =0, j = s.size()-1;
        cout << s.size() << endl;
        while(i<=j){
            if(!isalnum(s[i])){
                i++;continue;
            }
            if(!isalnum(s[j])){
                j--;continue;
            }
            if(isalnum(s[i]) && isalnum(s[j])){
                if(tolower(s[i])==tolower(s[j])){
                    i++;
                    j--;
                }
                else break;
            }
        }
        if(i>j)return true;
        cout <<s[i] << " " << s[j] << endl;
        return false;
    }
};
