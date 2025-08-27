class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1;
        stack<char> stk2;
        string str1 = "";
        string str2 = "";
        for(char c1:s){
            if(c1=='#'){
                if (!stk1.empty()) stk1.pop();
…};
