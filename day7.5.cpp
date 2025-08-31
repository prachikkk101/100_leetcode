class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if (root->left == NULL) return 1 + minDepth(root->right);
        if (root->right == NULL) return 1 + minDepth(root->left);
        int rightht = minDepth(root->right);
        int leftht = minDepth(root->left);
        return min(rightht,leftht) + 1;
    }
};
