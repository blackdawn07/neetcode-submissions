class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> v;
        for(int i {} ; i < n ; i++){
            int mx = 0;
            for(int j = i+1; j < n ; j++){
                mx = max(arr[j],mx);
            }
            if(i==n-1)mx=-1;
            v.push_back(mx);
        }
    return v;
    }
};