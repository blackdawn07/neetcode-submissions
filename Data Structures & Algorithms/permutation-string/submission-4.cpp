#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size(), n = s2.size();

        int i = 0;

        if (m > n) return false;

        string s1_sorted = s1;
        sort(s1_sorted.begin(), s1_sorted.end());

        while (i <= n) {
            string temp = s2.substr(i, m);
            sort(temp.begin(), temp.end());

            if (temp == s1_sorted) {
                return true;
            } else {
                i++;
            }
        }

        return false;
    }
};