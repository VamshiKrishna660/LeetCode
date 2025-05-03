class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> q;

        q.push({grid[0][0], 0, 0});
        vis[0][0] = true;

        int res=0;
        int dx[]={0, 0, 1, -1};
        int dy[]={1, -1, 0, 0};

        while (!q.empty()) {
            auto [e, row, col] = q.top();
            q.pop();

            res = max(res, e);

            if(row == n-1 && col == n-1){
                return res;
            }

            for(int i=0;i<4;i++) {
                int r=row+dx[i];
                int c=col+dy[i];
                if (r >= 0 && c >= 0 && r<n && c<n&&!vis[r][c]) {
                    vis[r][c] = true;
                    q.push({grid[r][c], r, c});
                }
            }
        }

        return res;
    }
};