class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a=-1,b=-1;
        int n=grid.size();
        int x=n*n;
        vector<int>freq(x+1,0);
        
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }

        for(int i=1;i<=x;i++)
        {
            if(freq[i]==0){
                b=i;
            }
            else if(freq[i]>1){
                a=i;
            }
        }
        return {a,b};
    }
};