class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char str : s){
            if(str=='(' || str=='{' || str=='['){
                stk.push(str);
            }else{
                if (stk.empty()) return false;
                char top = stk.top();
                stk.pop();
                if((str==')' && top!='(') || (str=='}' && top!='{')  || (str==']' && top!='[')){
                        return false;
                    }
                }
            }
            return stk.empty();
    }
};
