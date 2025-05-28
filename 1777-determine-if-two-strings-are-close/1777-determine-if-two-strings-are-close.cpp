class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()){
            return false;
        }
        unordered_map<int,char>mp1;
        unordered_map<int,char>mp2;
        for(char ch:word1){
            mp1[ch]++;
        }
        for(char ch:word2){
            mp2[ch]++;
        }
        set<char>s1;
        set<char>s2;
        for(auto &x:mp1){
            s1.insert(x.first);
        }
        for(auto &x:mp2){
            s2.insert(x.first);
        }
        if(s1 != s2){
            return false;
        }
        vector<int>temp1;
        vector<int>temp2;
        for(auto &x:mp1){
            temp1.push_back(x.second);
        }
        for(auto &x:mp2){
            temp2.push_back(x.second);
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        
        return temp1 == temp2;
    }
};