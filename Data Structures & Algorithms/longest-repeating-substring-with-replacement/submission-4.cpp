class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int mx = 0;

        for(char ch = 'A'; ch <= 'Z'; ch++){
    for(int i = 0; i < n; i++){
        int kleft = k;
        int len = 0;

        for(int j = i; j < n; j++){
            if(s[j] == ch) len++;
            else if(kleft > 0){
                kleft--;
                len++;
            }
            else break;
        }

        mx = max(mx, len);
    }
}

        return mx;
    }
};