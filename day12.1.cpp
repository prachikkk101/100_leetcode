class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root==NULL) return 0;
        if(root->left && !root->left->left && !root->left->right){
            sum+=root->left->val;
        }
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);
        return sum;
        
    }
};
