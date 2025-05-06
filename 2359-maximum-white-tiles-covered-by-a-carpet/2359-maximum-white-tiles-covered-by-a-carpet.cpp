class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        sort(tiles.begin(),tiles.end()); 
        int n=tiles.size();
        vector<int> prefix(n+1,0);
        for(int i=0;i<n;i++) {
            prefix[i+1] = prefix[i] + tiles[i][1]-tiles[i][0]+1;
        }

        int res = 0;
        for (int i=0;i<n;i++) {
            int s=tiles[i][0];
            int e=s+carpetLen-1;
            int l=i,r=n-1,j=i;
            while (l <= r) {
                int mid = (l+r)/2;
                if (tiles[mid][0] <= e) {
                    j = mid;
                    l = mid+1;
                } else {
                    r=mid-1;
                }
            }

            int total=prefix[j]-prefix[i];
            int extra=0;
            if (tiles[j][1] > e) {
                extra = max(0,e-tiles[j][0]+1);
            } else {
                extra=tiles[j][1]-tiles[j][0] + 1;
            }

            total+=extra;
            res=max(res, total);
        }

        return res;      
    }
};