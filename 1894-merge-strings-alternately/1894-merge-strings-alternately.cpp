class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string res = "";
        int n = max(word1.length(), word2.length());
        for(int i=0;i<n;i++){
            if(i< word1.length())
                res += word1[i];
            if(i < word2.length())
                res += word2[i];
        }
        return res;

    }
};