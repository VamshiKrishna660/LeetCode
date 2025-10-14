class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxi = *max_element(candies.begin(), candies.end());
        vector<bool> res(n, false);
        for(int i=0; i<n; i++){
            int val = candies[i] + extraCandies;
            cout<<val;
            if(val >= maxi){
                res[i] = true;
            }
        }
        return res;
    }
};