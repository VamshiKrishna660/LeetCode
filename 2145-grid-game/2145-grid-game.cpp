class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long res=LLONG_MAX;
        
        long long b=0, t=0;
        for (int val : grid[0]) {
            t += val;
        }

        for (int i=0;i<grid[0].size();i++) {
            t-=grid[0][i];
            res = min(res, max(t, b));
            b += grid[1][i];
        }
        return res;
    }
};
