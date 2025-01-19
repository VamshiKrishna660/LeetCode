class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int flag=0,c=0;
        vector<int>ans(nums.size(),0);
        for(int x:nums){
            if(x==0){
                c++;
                flag=1;
                continue;
            }
            prod*=x;
        }
        if(c>1){
            return ans;
        }
        if(c==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=prod;
                    break;
                }
            }
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=prod/nums[i];
        }
        return ans;
    }
};