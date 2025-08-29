class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int row = matrix.size();
        int col = matrix[0].size();

        int top=0, bottom=row-1;
        int left=0, right=col-1;

        vector<vector<int>> vis(row, vector<int>(col, 0));
        vector<int>res;

        while(top<=bottom and left<=right){
            for(int i=left;i<=right;i++){
                int val = matrix[top][i];
                res.push_back(val);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                int val = matrix[i][right];
                res.push_back(val);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    int val = matrix[bottom][i];
                    res.push_back(val);
                }
            }
            bottom--;

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    int val = matrix[i][left];
                    res.push_back(val);
                }
            }
            left++;
        }

        return res;
    }
};