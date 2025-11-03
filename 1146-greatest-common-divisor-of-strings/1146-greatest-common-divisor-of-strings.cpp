class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string x = str1 + str2;
        string y = str2 + str1;

        if(x!=y){
            return "";
        }

        int g = gcd(str1.length(), str2.length());
        string res = str1.substr(0, g);
        return res;
    }
};