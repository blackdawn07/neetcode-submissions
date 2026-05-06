class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
          long long i =1;
          long long j = *max_element(v.begin(), v.end());
          long double k =j;
          
          while(i<=j){
             long double sum= 0;
             long long mid = i + (j-i) / 2;
             if (mid == 0) mid = 1;
             for(int idx {} ; idx < v.size(); idx++){
                sum += ceil(v[idx]/ (long double)mid);
             }
             if(sum>h)i= mid+1;
             else {
                k = min(k,(long double)mid);
                j = mid-1;
             }
    }
    return  k;
    }
};
