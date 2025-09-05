class Solution {
public:
    int ans = 0;
    int max = -1;
    void dfs(TreeNode* root,int depth){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) {
            if(depth>max){
                max = depth;
…    }
};
