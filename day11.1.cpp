class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        bool isleft = isSameTree(p->left,q->left);
        bool isright = isSameTree(p->right,q->right);
        return  p->val==q->val && isleft && isright;
    }
};
