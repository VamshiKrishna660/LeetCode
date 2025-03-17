class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        
        for(auto&[val, freq] : mp){
            if(freq%2 != 0){
                return false;
            }
        }

        return true;
    }
};