class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        stack<int>stk;
        vector<int>ans(prices);
        for(int i=0;i<n;i++){
            while(!stk.empty() && prices[stk.top()]>=prices[i]){
                int j=stk.top();
                stk.pop();
                ans[j]=prices[j]-prices[i];
            }
            stk.push(i);
        }
        return ans;
    }
};