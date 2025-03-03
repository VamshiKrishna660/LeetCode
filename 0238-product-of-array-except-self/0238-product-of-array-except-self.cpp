class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c=0;
        vector<int>res(nums.size());
        int p=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
                continue;
            }
            p*=nums[i];
        }
        if(c>1){
            return res;
        }
        
        for(int i=0;i<nums.size();i++){
            if(c==1){
                if(nums[i]==0){
                    res[i]=p;
                }
                else{
                    continue;
                }
            }
            else{
                res[i]=p/nums[i];
            }

        }
        return res;
    }
};