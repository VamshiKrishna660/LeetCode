class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x=INT_MAX;
        int m=0;

        for(int i:prices){
            x=min(x,i);
            m=max(m,i-x);
        }
        return m;
    }
};