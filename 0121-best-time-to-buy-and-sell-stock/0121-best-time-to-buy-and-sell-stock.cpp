class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices[0];
        int m=0;
        for(int i=1;i<prices.size();i++){
            l=min(l,prices[i]);
            m=max(m,prices[i]-l);
        }
        return m;
    }
};