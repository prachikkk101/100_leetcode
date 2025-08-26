class Solution {
public:
        int priority(char ch){
            if(ch=='*'||ch=='/') return 2;
            else if(ch=='+'||ch=='-') return 1;
            else return 0;
        }
        int applyop(int a,int b,char op){
            if(op=='+') return a+b;
            if(op=='-') return a-b;
…        return nums.top();
    }
};
