class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==0) return 0;
        int countLeft = countNodes(root->left);
        int countRight = countNodes(root->right);
        return countLeft+countRight+1;
        
    }
};
