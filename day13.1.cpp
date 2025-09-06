class Solution {
public:
    void inorder(TreeNode* root,vector<int>&vec){
        if(root==NULL) return ;
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>vec;
        if(root==NULL) return 0;
        inorder(root,vec);
        sort(vec.begin(),vec.end());
        return vec[k-1];
        
    }
};
