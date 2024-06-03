#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node*left,*right;   
};

void PreorderTrav(node*curr,vector<int>& Preorder){
    if(curr==NULL) return;
    
    Preorder.push_back(curr->data);
    PreorderTrav(curr -> left,Preorder);
    PreorderTrav(curr -> right,Preorder);
}
struct node*newNode(int data){
struct node*node = (struct node*)malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;
return node;
}
int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  vector < int > Preorder;
  PreorderTrav(root, Preorder);

  cout << "The preOrder Traversal is : ";
  for (int i = 0; i < Preorder.size(); i++) {
    cout << Preorder[i] << " ";
  }
  return 0;
}