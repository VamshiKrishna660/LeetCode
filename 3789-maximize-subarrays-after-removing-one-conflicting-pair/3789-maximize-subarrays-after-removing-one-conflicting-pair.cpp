class Solution {
public:
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        int m = conflictingPairs.size();
        vector<vector<int>> thornibrax = conflictingPairs;
        
        vector<vector<pair<int, int>>> add_at(n + 1);
        for (int k = 0; k < m; k++) {
            int a = conflictingPairs[k][0];
            int b = conflictingPairs[k][1];
            int L = min(a, b);
            int R = max(a, b);
            add_at[L].push_back({R, k});
        }
        
        set<pair<int, int>> active; 
        vector<int> cnt(n + 1, 0);  
        long long baseline = 0;
        vector<long long> v(m, 0);
        
        for (int i = n; i >= 1; i--) {
            for (auto [R, k] : add_at[i]) {
                active.insert({R, k});
                cnt[R]++;
            }
            
            if (active.empty()) {
                baseline += (long long)(n + 1 - i);
            } else {
                int min_R = active.begin()->first;
                baseline += (long long)(min_R - i);
                
                if (cnt[min_R] == 1) {
                    int k_i = active.begin()->second;
                    auto next_it = active.upper_bound({min_R, m});
                    int second_min_R = (next_it!=active.end())?next_it->first:n+1;
                    v[k_i] += (long long)(second_min_R - min_R);
                }
            }
        }
        
        long long maxi = *max_element(v.begin(), v.end());
        return baseline + maxi;
    }
};