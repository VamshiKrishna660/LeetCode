class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=nums[i]^res;    //magic 
        }
        return res;
    }
};


        // unordered_map<int,int>mp;
        // for(auto x:nums){
        //     mp[x]++;
        // }
        // for(auto &x:mp){
        //     if(x.second==1){
        //         return x.first;
        //     }
        // }
        // return 0;