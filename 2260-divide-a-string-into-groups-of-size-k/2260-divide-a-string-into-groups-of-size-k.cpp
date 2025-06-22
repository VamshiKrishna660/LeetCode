class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        vector<string> v;
        string temp = "";
        int realK = k;
        for(int i=0;i<n;i++){
            if(k == 0){
                k = realK;
                v.push_back(temp);
                cout<<temp<<endl;
                temp = "";
            }
            temp += s[i];
            k--;
        }
        k = realK;
        if(temp.length() == k){
            cout<<temp<<endl;
            v.push_back(temp);
        }
        else{
            int c = k - temp.length();
            while(c--){
                temp += fill;
            }
            v.push_back(temp);
        }
        
        return v;
        
    }
};