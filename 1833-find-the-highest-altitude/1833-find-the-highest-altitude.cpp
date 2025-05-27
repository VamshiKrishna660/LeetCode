class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>vec(gain.size()+1);
        vec.push_back(0);
        for(int i=0;i<gain.size();i++){
            int val = vec.back()+gain[i];
            vec.push_back(val);
        }        
        auto it = max_element(vec.begin(),vec.end());

        return *it;
    }
};