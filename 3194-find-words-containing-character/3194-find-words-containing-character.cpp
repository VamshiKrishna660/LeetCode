class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        for(int i=0;i<words.size();i++){
            string str = words[i];
            if(find(str.begin(),str.end(),x) != str.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};