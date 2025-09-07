class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>avgList;
        if(!root) return avgList;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
…            avgList.push_back((double)sum/size);
        }
        return avgList;
    }
};
