class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int maxx = INT_MIN;

        for(int i = energy.size() - 1; i >= 0; i--){
            if(i + k < energy.size()){
                energy[i] += energy[i + k];
            }
            maxx = max(maxx, energy[i]);
        }

        return maxx;
    }
};