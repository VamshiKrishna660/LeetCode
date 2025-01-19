class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        int m=0,l=0,r=l+1;

        while(r<prices.size()){
            if(prices[l]>=prices[r]){
                l=r;r++;
            }
            else{
                int x=prices[r]-prices[l];
                m=max(m,x);
                r++;
            }
        }
        return m;
    }
};