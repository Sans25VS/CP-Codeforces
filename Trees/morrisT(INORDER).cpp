vector <int> GetInorder(TreeNode*root){
vector<int> inorder;
TreeNode*curr = root;
while(curr != NULL){
if(curr -> left == NULL){
inorder.push_back(curr->val);
curr = curr->right;
}

else {
    TreeNode*prev = curr -> left;
    prev = prev->right;
    while(prev->right && prev->right != curr){
        prev = prev->right;
    }
    if(prev -> right == NULL)
    {prev -> right = curr;
    curr = curr-> next;
    }
    else {
        prev -> right = NULL;
        inorder.push_back(curr->val);
        curr =  curr-> right;
    }
}
}
return inorder;
 
}