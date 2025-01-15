class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int l=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ' && l==0){
                
            }
            else if(s[i]==' ' && l!=0){
                break;
            }
            else{
                l++;
            }
            
        }
        return l;
    }
};