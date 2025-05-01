class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n = maxHeights.size();
        vector<long long> l(n);
        vector<long long> r(n);
        stack<int> stk;
        for (int i=0;i<n;i++) {
            while (!stk.empty() && maxHeights[stk.top()]>maxHeights[i]) {
                stk.pop();
            }
            if (stk.empty()) {
                l[i]=1LL*maxHeights[i]*(i + 1);
            } else {
                int prev = stk.top();
                l[i]=l[prev]+1LL*maxHeights[i]*(i-prev);
            }
            stk.push(i);
        }

        while (!stk.empty()) stk.pop();

        for (int i=n-1;i>=0;i--) {
            while (!stk.empty() && maxHeights[stk.top()]>maxHeights[i]) {
                stk.pop();
            }
            if (stk.empty()) {
                r[i] = 1LL * maxHeights[i] * (n - i);
            } else {
                int next = stk.top();
                r[i] = r[next] + 1LL * maxHeights[i] * (next - i);
            }
            stk.push(i);
        }

        long long ans = 0;
        for (int i=0;i<n;i++) {
            ans=max(ans, l[i] + r[i] - maxHeights[i]);
        }
        return ans;
    }
};