class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int res = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] > prices[i-1]){
                res += prices[i] - prices[i-1];
            }
        }
        return res;
    }
};