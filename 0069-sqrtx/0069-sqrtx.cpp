class Solution {
public:
    int mySqrt(int x) {
        long long m;
        for(long long i=1;i<=x;i++){
            if(x>=i*i){
                m=i;
            }
            else{
                m=i-1;
                break;
            }
        }
        return m;
    }
};