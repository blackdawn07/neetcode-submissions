class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
          long long i =1;
          long long j = *max_element(v.begin(), v.end());
          long long k =j;
          
          while(i<=j){
             long long sum= 0;
             long long mid = i + (j-i) / 2;
             for(int i {} ; i < v.size(); i++){
                sum += (v[i] + mid - 1) / mid;
             }
             if(sum>h)i= mid+1;
             else {
                k = min(k,mid);
                j = mid-1;
             }
    }
    return  k;
    }
};
