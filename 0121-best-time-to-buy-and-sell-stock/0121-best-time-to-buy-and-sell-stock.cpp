class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int x=0;
        for(int i=1;i<prices.size();i++){
            if(prices[x] > prices[i]){
                x = i;
                continue;
            }
            maxi = max(maxi, prices[i]-prices[x]);
        }
        return maxi;
    }
};