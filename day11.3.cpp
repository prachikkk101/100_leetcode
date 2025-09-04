class Solution {
public:
    bool isidentical(TreeNode* root1, TreeNode* sb){
        if(root1==NULL && sb==NULL) return true;
        if(root1==NULL||sb==NULL) return false;
        bool isleft = isidentical(root1->left,sb->left);
        bool isright = isidentical(root1->right,sb->right);
        return root1->val==sb->val && isleft && isright;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL || subRoot==NULL) return false;
        if((root->val==subRoot->val) && isidentical(root,subRoot)) return true;

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
