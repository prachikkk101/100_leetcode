public:
    bool evaluateTree(TreeNode* root) {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL) return root->val==1;
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        if(root->val==2) return left || right;
        if(root->val==3) return left&&right;

        return false;
    }
};
