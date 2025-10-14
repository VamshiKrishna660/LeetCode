class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        
        for(int i=0;i<len;i++){
            if (flowerbed[i] == 0){
                bool left = (i==0) or (flowerbed[i-1]==0);
                bool right = (i==len-1) or (flowerbed[i+1] == 0);
                if(right and left){
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        if(n<=0){
            return true;
        }
        return false;
    }
};