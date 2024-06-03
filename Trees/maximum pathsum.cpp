  int maxPathSum(TreeNode* root) {
    int maxi = 0;
    maxbolte(root,maxi);
    return maxi;    
    }
    private:
    int maxbolte(TreeNode*Node,int&maxi){
        if (!Node) return 0;
        int l = max(0,maxbolte(Node->left,maxi));
        int r = max(0,maxbolte(Node->right,maxi));
        maxi = max(maxi,l + r + Node->val);
        return max(l,r) + Node -> val;
    }