class Solution {
public:
    bool canJump(vector<int>& nums) {
        int x = 0;
        for(int i=0;i<nums.size();i++){
            if(i>x){
                return false;
            }
            x = max(x, nums[i]+i);
            if(x >= nums.size()-1){
                return true;
            }
        }
        return false;

    }
};