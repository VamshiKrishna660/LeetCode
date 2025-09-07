class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        int x = n/2;
        for(int i=x;i>0;i--){
            res.push_back(i);
            res.push_back(-i);
        }
        if(res.size() < n){
            res.push_back(0);
        }
        return res;
    }
};