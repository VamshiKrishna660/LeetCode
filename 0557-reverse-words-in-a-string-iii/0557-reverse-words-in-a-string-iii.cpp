class Solution {
public:
    string rev(string w){
        int n=w.length();
        for(int i=0;i<n/2;i++){
            swap(w[i],w[n-i-1]);
        }
        return w;
    }
    string reverseWords(string s) {
        string word="";
        string result="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!isspace(s[i])){
                word+=s[i];
               
            }
            else{
                if(!word.empty()){
                    result+=rev(word)+" ";
                    word="";
                }
                
            }
            if(i==n-1){
                result+=rev(word);;
            }
            
        }  
        return result;
    }
};