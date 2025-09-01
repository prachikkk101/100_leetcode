class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> vec;
        vec.push_back(root->val);
        vector<int> leftVec=preorderTraversal(root->left);
        vec.insert(vec.end(), leftVec.begin(), leftVec.end());
        vector<int> rightVec=preorderTraversal(root->right);
        vec.insert(vec.end(), rightVec.begin(), rightVec.end());
        return vec;
    }
};
