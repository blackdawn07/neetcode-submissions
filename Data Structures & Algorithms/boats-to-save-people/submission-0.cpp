class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int sum = 0 ,ans =0 , i=0, j =n-1;
        
        while(i<j){
            if(people[i]+people[j] <= limit){
                i++;j--;
            }
            else{
                j--;
            }
            ans++;
        }
        if(i==j)return ans+ 1;
         return ans;
    
    }
};