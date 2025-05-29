class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int maxi = INT_MIN;
        while(l<r){
            int len = min(height[l], height[r]);
            int bre = r-l;
            maxi = max(maxi, len*bre);
            if(height[l]>=height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return maxi;
    }
};