class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;
        int l=0,r=0,m=0;

        while(r<s.length()){
            if(set.count(s[r]) == 0){
                set.insert(s[r]);
                m = max(m,r-l+1);
            }
            else{
                while(set.count(s[r])){
                    set.erase(s[l]);
                    l++;
                }
                set.insert(s[r]);
            }
            r++;
        }
        return m;
    }
};