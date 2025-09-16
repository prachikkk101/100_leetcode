class Solution {
public:
    bool searchInCol(vector<vector<int>>& matrix, int target, int row) {
        int cols = matrix[0].size();
        int start = 0, end = cols - 1;
        while (start <= end) {
            int mid1 = start + (end - start) / 2;
            if (target == matrix[row][mid1]) {
                return true;
            } else if (target < matrix[row][mid1]) {
…                st = mid + 1;
            }
        }
        return false;
    }
};
