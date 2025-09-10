class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root==NULL) return false;
        if(!root->left->left && !root->right->right){
            return root->val==root->right->val+root->left->val;
        }
        bool isleft = checkTree(root->left);
        bool isright = checkTree(root->right);

        return isleft && isright;
    }
};
