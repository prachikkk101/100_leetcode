class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return pow(2,0) == 1;
        }
        return isPowerOfTwo(n);
    }
};
