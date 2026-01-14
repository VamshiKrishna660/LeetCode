class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadanes algorithm
        int c=0, m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            c = max(nums[i], nums[i]+c);
            m = max(m, c);
        }
        return m;
        
    }
};