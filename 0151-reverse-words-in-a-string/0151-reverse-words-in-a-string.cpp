class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        vector<string> v;
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                if(!temp.empty()){
                    v.push_back(temp);
                }
                temp = "";
                
            }
            else{
                temp += s[i];
            }
        }
        if(!temp.empty()){
            v.push_back(temp);
        }

        string res = "";
        for(int i=v.size()-1;i>=0;i--){
            res += v[i];
            if(i != 0){
                res += ' ';
            }
        }
        return res;
    }
};