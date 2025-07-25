class Solution {
public:
    int maxSum(vector<int>& nums) {
        int m = INT_MIN;
        unordered_set<int>s;
        for(int x:nums){
            if(x>=0){
                s.insert(x);
            }
            else{
                m = max(m, x);
            }
        }
        int sum = 0;
        for(auto x:s){
            sum += x;
        }
        if(s.size()){
            return sum;
        }
        return m;
    }
};