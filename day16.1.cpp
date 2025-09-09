class Solution {
public:
    void vect(TreeNode* root,vector<int>&vec){
        if(root==NULL) return;
        vect(root->left,vec);
        vec.push_back(root->val);
        vect(root->right,vec);
    }
…        vect(root,vec);
        int l = 0;
        int r = vec.size()-1;
        if (vec.empty()) return NULL;
        return construct(l,r,vec);

        
    }
};
