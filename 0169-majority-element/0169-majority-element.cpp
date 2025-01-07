class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,m=-1;
        
        for(int x:nums){
            if(c==0){
                m=x;
                c++;
            }
            else if(x==m){
                c++;
            }
            else{
                c--;
            }
        }
        return m;
    }
};