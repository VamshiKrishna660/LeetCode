class Solution {
public:
    int compress(vector<char>& chars) {
        int c=1;
        int pos=0;
        int n = chars.size();
        for(int i=1;i<=n;i++){
            if(i<n && chars[i-1] == chars[i]){
                c++;
            }
            else{
                chars[pos++] = chars[i-1];
                if(c>1){
                    string str = to_string(c);
                    for(char ch:str){
                        chars[pos++] = ch;
                    }
                }
                c=1;
            }
        }
        return pos;
    }
};