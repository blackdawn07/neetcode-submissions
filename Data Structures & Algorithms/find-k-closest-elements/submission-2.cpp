class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       multimap<int, int> mp;
       vector<int> ans;
       int c=0;
       for(int i {} ; i < arr.size(); i++){
         mp.insert({abs(arr[i]-x), i});
       }
       for(auto at : mp){
          if(c==k)break;
          ans.push_back(arr[at.second]);
          c++;
       }
       sort(ans.begin(),ans.end());
       return ans;
    }

};