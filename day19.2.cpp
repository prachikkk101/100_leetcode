class Solution {
public:
    void vector1(TreeNode* root, int targetSum,vector<vector<int>>&vec,vector<int>&curr){
        if(root==NULL) return;
        curr.push_back(root->val);
        if(!root->left && !root->right&&root->val==targetSum){
            vec.push_back(curr);
…
        return vec;
        
        
    }
};
