class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> stk;
        string str;
        bool found = false;
        for(char c : word){
            if(!found){
                stk.push(c);
                if(c == ch){
…        }
        return str;
        
    }
};
