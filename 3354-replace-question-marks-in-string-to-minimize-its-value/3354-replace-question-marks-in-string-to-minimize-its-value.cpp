class Solution {
public:
    string minimizeStringValue(string s) {
        vector<int> v(26, 0);
        for(char ch:s){
            if(ch!='?'){
                v[ch-'a']++;
            }
        }

        string str;
        for(char ch:s){
            if(ch=='?'){
                int mini=INT_MAX;
                int x=0;

                for(int i=0;i<26;i++){
                    if (v[i] <mini) {
                        mini =v[i];
                        x=i;
                    }
                }

                str+=('a' + x);
                v[x]++;
            }
        }
        sort(str.begin(), str.end());
        int x=0;
        for(char& ch:s){
            if(ch=='?'){
                ch=str[x++];
            }
        }
        return s;
    }
};