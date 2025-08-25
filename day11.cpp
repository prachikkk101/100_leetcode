class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        int sum1 = 0;
        int n1 = 0;
        int n = operations.size();
        for(int i = 0 ; i<n ; i++){
            if(operations[i]=="C"){
                n1 = stk.top();
…            stk.pop();
        }
        return sum1;
    }
};
