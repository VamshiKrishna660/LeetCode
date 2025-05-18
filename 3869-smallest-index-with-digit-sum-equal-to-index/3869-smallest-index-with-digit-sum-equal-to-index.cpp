class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int t=abs(nums[i]);   
            int n=0;
            while(t>0){
                n+=t%10;
                t=t/10;
            }
            if(n == i){
                return i;
            }
        }
        return -1;
    }
};