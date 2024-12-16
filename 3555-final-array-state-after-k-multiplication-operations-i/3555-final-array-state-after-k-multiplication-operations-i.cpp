class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        while(k--){
            int m=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<m){
                    m=nums[i];
                }
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]==m){
                    nums[i]*=multiplier;
                    break;
                }
            }
        }

        return nums;
    }
};