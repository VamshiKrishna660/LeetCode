class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size(),0);
        int p = 1;
        int zeros = 0;
        for(int x:nums){
            if(x==0){
                zeros++;
            }
            else{
                p*=x;
            }
        }
        if(zeros>1){
            return res;
        }
        
        for(int i=0;i<nums.size();i++){
            if(zeros == 0){
                res[i] = p/nums[i];
            }
            else if(nums[i]==0){
                res[i] = p;
            }
            else{
                res[i]=0;
            }
        }
        return res;
    }
};