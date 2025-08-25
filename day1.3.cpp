class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int st = 0;
        int n = prices.size();
        vector<int> vec;
        int final = 0;
        while(st<n){
            int discount = 0;
            int i = st + 1;
…        }
        return vec;
    }
};
