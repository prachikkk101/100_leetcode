class Solution {
public:
    void dfs(TreeNode* root,string path,vector<int>& vec){
        if(root==NULL) return;
        path += to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            vec.push_back(stoi(path));
            return;
…            sum+=i;
        }
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        return sum(root);
    }
};
