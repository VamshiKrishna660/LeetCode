class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int p=1,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
            else{
                p*=nums[i];
            }
        }
        if(c>1){
            return res;
        }
        for(int i=0;i<n;i++){
            if(c==1){
                if(nums[i]!=0){
                    res[i]=0;
                }
                else{
                    res[i]=p;
                }
            }
            else{
                res[i]= p/nums[i];
            }
        }
        return res;

    }
};