class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int n=word1.length();
        int m=word2.length();
        int i=0,j=0;

        while(i<n && j<m){
            if(i<n)
                res.push_back(word1[i]);
            if(j<m)
                res.push_back(word2[j]);
            i++;j++;
        }

        if(n>m){
            for(i=i;i<n;i++){
                res.push_back(word1[i]);
            }
        }
        else if(n<m){
            for(j=j;j<m;j++){
                res.push_back(word2[j]);
            }
        }
        return res;
    }
};