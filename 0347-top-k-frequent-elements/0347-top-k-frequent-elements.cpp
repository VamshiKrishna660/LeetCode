class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }

        vector<int>res;
        vector<vector<int>> arr(nums.size()+1);
        for(auto [a,b]:mp){
            arr[b].push_back(a);
        }

        for(int i=nums.size();i>0;i--){
            for(int x:arr[i]){
                if(res.size()==k)
                    return res;
                res.push_back(x);
            }
        }
        return res;
    }
};