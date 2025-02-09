class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int>stk;
        for(auto x:tokens){
            if(x=="+"){
                int a=stk.top();   stk.pop();
                int b=stk.top();   stk.pop();
                stk.push(b+a);
            }
            else if(x=="-"){
                int a=stk.top();   stk.pop();
                int b=stk.top();   stk.pop();
                stk.push(b-a);
            }
            else if(x=="*"){
                int a=stk.top();   stk.pop();
                int b=stk.top();   stk.pop();
                stk.push(b*a);
            }
            else if(x=="/"){
                int a=stk.top();   stk.pop();
                int b=stk.top();   stk.pop();
                stk.push(b/a);
            }
            else{
                stk.push(stoi(x));
            }
        }
        return stk.top();
    }
};