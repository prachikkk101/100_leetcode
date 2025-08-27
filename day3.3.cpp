class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stk;
        string str = "";
        for(char c: s){
            if(c!='('){
                stk.push(c);
            }else{
                string temp  = "";
…        }
        while(!stk.empty()){
            str += stk.top();
            stk.pop();
        }
        
        return str;
    }
};
