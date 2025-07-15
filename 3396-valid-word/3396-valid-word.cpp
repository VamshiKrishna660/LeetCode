class Solution {
public:
    bool isValid(string word) {
        int v=0, con=0;
        if(word.length()>=3){
            for(char c:word){
                if(isdigit(c)){
                    continue;
                }
                else if(isalpha(c)){
                    char low = tolower(c);
                    if(low=='a' || low=='e' || low=='i' || low=='o' || low=='u'){
                        v+=1;
                    }
                    else{
                        con+=1;
                    }
                }
                else 
                {
                    return false;
                }
            }
        }
        else 
        {
            return false;
        }

        if(v>0 and con>0){
            return true;
        }
        return false;
    }
};