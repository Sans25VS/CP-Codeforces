 bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL ){
            return (p==q);
        }
        return(p -> val == q ->val)
        &&isSameTree(p->left,q->left)
        &&isSameTree(p->right,q->right);
    }
};
The function starts with a base case: If either p or q is NULL (i.e., an empty tree), 
it means one tree is empty while the other is not. In this case, it checks if both p and q are NULL. If they are both NULL, it returns true (indicating that the empty trees are identical). If only one of them is NULL, it returns false (since an empty tree is not identical to a non-empty tree).

If both p and q are not NULL, 
it proceeds to check the values of the current nodes (p->val and q->val). If the values are equal, it continues to check their left subtrees and right subtrees recursively.

The recursion is the key to the function's logic.
 The function calls itself with the left child of p and the left child of q, as well as with the right child of p and the right child of q. This recursive process continues until either the base case is reached (when one of the nodes is NULL) or if the values of corresponding nodes are not equal. If at any point in the recursion the values are not equal, the function will return false, indicating that the trees are not identical.

If the recursive calls for both left and right subtrees return true,
 it means all corresponding nodes in both trees have the same value. Thus, the function returns true, indicating that the trees are identical.

In summary, this code uses recursion to traverse both trees simultaneously and compares the values of corresponding nodes. If any of the nodes have different values or if one tree is empty while the other is not, it returns false. Otherwise, if all nodes have the same values in both trees, it returns true, indicating that the trees are identical.