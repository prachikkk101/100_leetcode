class Solution {
public:
    int countroot(TreeNode* root,long long targetSum){
        if(!root) return 0;
        int count = 0;
        if(root->val==targetSum) count++;
        count += countroot(root->left,targetSum-root->val);
        count += countroot(root->right,targetSum-root->val);
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        int count = countroot(root,targetSum);
        count+= pathSum(root->left,targetSum);
        count+= pathSum(root->right,targetSum);
        return count;
    }
};
