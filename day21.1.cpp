class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root) return -1;
        vector<long long> vec;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
…    }
};
