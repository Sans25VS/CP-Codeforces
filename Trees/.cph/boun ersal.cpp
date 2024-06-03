public:
// parametres givenn honga
vector<int> ans;
if(root == NUL) return ans;
if ( !isLeaf(root) ) ans.push_back(root-> data);

addLeft(      );
addleafnodes(      );
addright(    );
return ans;


private:
void addLeft(Node*root,vector<int>&ans){
    Node*curr = root->left;
    while(curr){
    if(!isLeaf(curr)) ans.push_back(curr->data);
    if(curr -> left)  {curr = curr->left;}
    else { curr = curr->right;}
    }
}
void addRight(Node*root,vector<int>&ans){
    Node*curr = root->right;
    vector<int>temp;
    while(curr){
        if(!isLeaf(curr)) temp.push_back(curr);
        if(curr-> right){curr = curr->right;}
        else{ curr = curr->left;}
        for(int i=temp.size()-1; i>=0; i--){
        ans.push_back(temp[i]);
        }
void addleafnodes(Node*root,vector<int>& ans){
    if(isLeafNode(root)){
        ans.push_back(root->data);
    }
    if(root -> left) addleafnodes(root->left,ans);
    if(root -> right) addleafnodes(root->right,ans);



}



    }

