class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(int x:nums){
            mp[x]++;
        }

        int m = INT_MIN;
        int res = nums[0];

        for(auto &x:mp){
            if(x.second>m){
                m = max(m, x.second);
                res = x.first;
            }
        }

        return res;
    }
};