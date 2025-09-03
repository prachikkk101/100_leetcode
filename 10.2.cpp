class Solution {
public:
    void dffs(TreeNode*root,string path,vector<string>&result){
        if(!root) return;

        if(path.empty()){
            path += (to_string(root->val));
        }else{
…    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>str;
        dffs(root,"",str);
        
        return str;
    }
};
