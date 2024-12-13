class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int c=0;
        for(int x:nums){
            if(mp.find(x)!=mp.end()){
                c+=mp[x];
                mp[x]++;
            }
            else{
                mp[x]=1;
            }
        }
        return c;
    }
};