class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        for(int i=0;i<=n;i++){
            int x=bitset<32>(i).count();
            res[i]=x;
        }
        return res;
    }
};