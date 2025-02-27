class Solution {
public:
    int hammingWeight(int n) {
        int c=0;
        vector<int>bin(32);
        int i=0;
        while(n>0){
            bin[i++]=n%2;
            n/=2;
        }
        for(int j=bin.size()-1;j>=0;j--){
            if(bin[j]==1){
                c++;
            }
        }
        return c;
        
    }
};