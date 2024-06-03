public boolean isValidBST(TreeNode* root,long INT_MIN,long INT_MAX){
    if(root == NULL) return true;
    if (root.val < INT_MIN && root.val > INT_MAX){
        return false;
    }
    return isValidBST(root.left,minval,root.val);
    && isValidBST(root.right,root.val,maxval);
}