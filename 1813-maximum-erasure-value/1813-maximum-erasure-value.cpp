class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0, maxi = 0;
        int i = 0;
        unordered_set<int>s;
        for(int j=0;j<nums.size();j++){
            while(s.count(nums[j])){
                s.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            s.insert(nums[j]);
            sum += nums[j];
            maxi = max(maxi, sum);
        
        }
        return maxi;
        
    }
};