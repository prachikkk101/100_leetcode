class Solution {
public:
    void inorder(TreeNode* root,vector<int>&vec){
        if(root==NULL) return;
        inorder(root->left,vec);
        vec.push_back(root->val);

        inorder(root->right,vec);
…    }
};
