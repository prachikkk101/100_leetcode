class Solution {
public:
    int ans = 0;
    int maxheight(TreeNode* root){
        if(root==NULL) return 0;
        int left = maxheight(root->left);
        int right = maxheight(root->right);
        ans = max(ans,left+right);
        return max(left,right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxheight(root);
        return ans;
        
    }
};
