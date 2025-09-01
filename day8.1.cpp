class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL&& root->val==targetSum) return true;
        if(hasPathSum(root->left,targetSum-root->val)){
            return true;
        }
        else if(hasPathSum(root->right,targetSum-root->val)){
            return true;
        }
        return false;
    }
};
