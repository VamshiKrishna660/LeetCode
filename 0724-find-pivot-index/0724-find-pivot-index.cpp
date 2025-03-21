class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot=0;
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
        }
        int s=0,x=0;
        for(int i=0;i<nums.size();i++){
            if(tot-nums[i]-x == x){
                return i;
            }
            else{
                x+=nums[i];
            }
        }
        return -1;
    }
};