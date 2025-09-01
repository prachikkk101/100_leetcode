class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vec;
        vector<int> left = postorderTraversal(root->left);
        vec.insert(vec.end(), left.begin(), left.end());
        vector<int>right= postorderTraversal(root->right);
        vec.insert(vec.end(), right.begin(), right.end());
        vec.push_back(root->val);
        return vec;
    }
};
