class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp1, mp2;
        for(char x:ransomNote){
            mp1[x]++;
        }
        for(char x:magazine){
            mp2[x]++;
        }

        for(auto &x:mp1){
            char ch = x.first;
            int freq = x.second;
            if(mp2.find(ch) == mp2.end()){
                return false;
            }
            if(freq > mp2[ch]){
                return false;
            }
        }
        return true;
    }
};