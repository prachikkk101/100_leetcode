class Solution {
public:
    int height(TreeNode* root1){
        if(root1==NULL) return 0;
        return 1+ max(height(root1->left),height(root1->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lh = height(root->left);
        int rh = height(root->right);
        if(abs(lh-rh)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};
