class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        vector<int> v;
        map<int,int> mp;
        for(int i {} ; i < n ; i++)mp[arr[i]]++;
        while(i < n-1){
            mp[arr[i]]--;
            if(mp[arr[i]]==0)mp.erase(arr[i]);
            if (!mp.empty()) {
              auto it = mp.end();
              --it;
              v.push_back(it->first);
            }
            i++;
        }
        v.push_back(-1);
    return v;
    }
};