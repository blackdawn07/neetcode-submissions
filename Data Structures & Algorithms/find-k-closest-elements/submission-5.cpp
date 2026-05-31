class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i = 0, j = k-1 , str = 0 , end= 0, sum  =0;
        int mn = INT_MAX;
        if(k==arr.size()) return arr;
        for(int i = 0 ; i < k ; i++){
           sum += abs(arr[i]-x);
        }
        str =0,end =k-1;
        mn = sum;
        i++;j++;
        while(j<arr.size()){
           sum -= abs(arr[i-1]-x);
           sum += abs(arr[j]-x);
           if(sum < mn){
             mn = sum;
             str = i;
             end = j;
           }
           i++;j++;
        }
        cout << i << " " << j << endl;
        return vector<int>(arr.begin() + str , arr.begin() + end+1);
    }
};