class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vec;
        if(root==NULL) return vec;
        vector<int>left = inorderTraversal(root->left);
        vec.insert(vec.end(),left.begin(),left.end());
        vec.push_back(root->val);
        vector<int>right = inorderTraversal(root->right);
        vec.insert(vec.end(),right.begin(),right.end());
        return vec;

        
    }
};
