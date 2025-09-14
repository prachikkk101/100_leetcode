class Solution {
public:
    int search(vector<int>&inorder,int val,int left,int right){
        for(int i= left; i<=right; i++){
            if(inorder[i]==val) return i;
        }
        return -1;
    }
…        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int left = 0;
        int right = inorder.size()-1;
        int idx = 0;
        return build(preorder,inorder,idx,left,right);
    }
};
