class Solution {
public:
    int cal(int n){
        int sum = 0;
        while(n>0){
            int r=n%10;
            sum += r*r;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        unordered_set<int>s;
        
        while(n!=1){
            if(s.count(n))
                return false;
            s.insert(n);
            n = cal(n);
        }
        return true;
    }
};