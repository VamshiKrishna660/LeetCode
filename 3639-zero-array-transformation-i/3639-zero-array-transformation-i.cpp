class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>diff(nums.size()+1, 0);
        for(const auto& q:queries){
            int l=q[0];
            int r=q[1];
            diff[l]++;
            if(r+1<nums.size()){
                diff[r+1]--;
            }
        }
        int c=0;
        for(int i=0;i<nums.size();i++){
            c+=diff[i];
            if(nums[i]>c)
                return false;
        }
        return true;
    }
};