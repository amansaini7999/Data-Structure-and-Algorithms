#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node* left;
  node* right;
};

node* Node(int data){
  node* temp;

  temp = new node;
  temp->data = data;
  temp->left=NULL;
  temp->right=NULL;

  return temp;
}

void inorder(node* root){
  if(root==NULL)
    return;

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

node* getParent(node* root, int n1, int n2){
  if(root->data>=n1 && root->data<=n2)
    return root;

  else if(root->data>n1 && root->data>n2)
    return getParent(root->left, n1, n2);

  else
    return getParent(root->right, n1, n2);
}

int main(){
  struct node* root;
  root = Node(8);
  root->left = Node(3);
  root->right = Node(10);
  root->left->left = Node(1);
  root->left->right = Node(6);
  root->left->right->left = Node(4);
  root->left->right->right = Node(7);
  root->right->right = Node(14);
  root->right->right->left = Node(13);

  // inorder(root);

  node* parent = getParent(root, 1, 14);

  cout<<parent->data<<"\n";

  return 0;
}
