class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int l=0, r=1;
        if(prices.size() == 1){
            return maxi;
        }

        while(l<prices.size() and r<prices.size()){
            if(prices[l] > prices[r]){
                l++;
            }
            else{
                maxi = max(maxi, prices[r]-prices[l]);
                r++;
            }
        }
        return maxi;

    }
};