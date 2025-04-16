class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>sett;
        int l=0, r=0;
        int m=0, c=0;
        while(r<s.length()){
            if(sett.count(s[r]) == 0){
                sett.insert(s[r]);
                m = max(m,r-l+1);
            }
            else{
                while(sett.count(s[r])){
                    sett.erase(s[l]);
                    l++;
                }
                sett.insert(s[r]);
            }
            r++;
        }
        return m;
    }
};