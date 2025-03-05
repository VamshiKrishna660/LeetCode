class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Follow Kadanes Algorithm
        int l=0;
        int sum=0,m=INT_MIN;
        while(l<nums.size()){
            sum=max(nums[l],sum+nums[l]);
            m=max(m,sum);
            l++;
        }
        return m;
    }
};