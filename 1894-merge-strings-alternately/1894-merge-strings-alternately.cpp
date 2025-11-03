class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x = word1.length();
        int y = word2.length();
        string res = "";
        int i=0, j=0;
        while(i<x or j<y){
            if(i<x)
                res += word1[i++];
            if(j<y)
                res += word2[j++];
        }
        return res;
    }
};