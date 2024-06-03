vector<int>PreInPostTraversal(TreeNode* root){
stack<pair<Treenode*, int>> st;
st.push({root,1});
vector<int> pre ,In ,Post; // intialissing 3 individual vectors
if(root == NULL) return ;
while(!st.empty()){ 
    auto it = st.top();   // travesrsing every element of the tree
    st.pop();
    if(it.second == 1){                  // checking the second element as 1 as it is the root of the tree 
        pre.push_back(it.first -> val);  // pushing the value  in the preorder
        it.second++ ;                    // incrementing its second value by 1
        st.push(it);                     // pushing the updated value of second element while checking the left child present or not    
        if(it.first -> left != NULL){    // if the left child is present, push the child in the stack with its second value as 1   
            st.push(it.first -> left);            
        }
    }
    else if(it.second == 2){             // checking the second element as 2 as it is the root of the tree 
        In.push_back(it.first -> val);   // pushing the value  in the Inorder   
        it.second++;                     // incrementing its second value by 1
        st.push(it);                     // pushing the updated value of second element while checking the right child present or not  
        if(it.first -> right != NULL){   // if the right child is present, push the child in the stack with its second value as 1  
            st.push(it.first -> right);
    }
}

    else{
        Post.push_back(it.first ->val); //checking second value as 3 and simply poping thee element then
    }















}