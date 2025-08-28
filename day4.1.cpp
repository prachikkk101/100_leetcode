class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int close = 0;
        for(char c: s){
            if(c=='('){
                open+=2;
                if(open%2 == 1){
                    open--;
…        return open + close;
    }
};
