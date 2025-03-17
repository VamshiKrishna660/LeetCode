class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p=0,n=0;
        for(int x:nums){
            if(x>0){
                p++;
            }
            else if(x<0){
                n++;
            }
            else{
                continue;
            }
        }
        int m = max(p,n);
        return m;
    }
};