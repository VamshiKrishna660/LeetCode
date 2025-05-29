class Solution {
private:
    int solve(vector<int>& nums, int k) {
        int i=0, j=0;
        int c=0;
        int z = 0;
        int maxi = 0;
        while(j<nums.size()){
            if(nums[j] == 0){
                z++;
            }
            
            while(z>k){
                if(nums[i] == 0)
                    z--;
                i++;
            }
            c = j-i+1;
            maxi = max(maxi, c);
            j++;
        }
        return maxi;
    }
public:
    int longestSubarray(vector<int>& nums) {
        // vector<int> arr = {0,1,1,1,0,1,1,0,1};
        // int temp = solve(arr, 3);
        // cout << temp - 3;
        int ans = solve(nums, 1);
        return ans - 1;
    }
};