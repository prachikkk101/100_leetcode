class Solution {
public:
    void max(TreeNode* root,vector<int>& vec){
        if(root==NULL) return;
        max(root->left,vec);
        vec.push_back(root->val);
        max(root->right,vec);
    }
…        }
        sort(dup.begin(),dup.end());
        if(dup.size()<2) return -1;
        return dup[1];
    }
};
