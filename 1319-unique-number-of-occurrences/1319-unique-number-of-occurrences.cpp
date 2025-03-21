class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        unordered_map<int,int>res;
        for(auto &x:mp){
            res[x.second]++;
        }
        for(auto &x:res){
            if(x.second>1){
                return false;
            }
        }
        return true;
    }
};