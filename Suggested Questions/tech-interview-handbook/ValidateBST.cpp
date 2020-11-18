#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
  int data;
  TreeNode* left;
  TreeNode* right;
};

bool isValidBST(TreeNode* root)
{
  cout<<root->data<<" "<<root->left->data<<" "<<root->right->data;
  return 1;
}

int main()
{
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];

  TreeNode* root;
  stack<TreeNode*> st;

  TreeNode* temp = new TreeNode;
  temp->data=arr[0];
  temp->left=NULL;
  temp->right=NULL;
  root = temp;

  st.push(root);
  for(int i=1; i<n; i+=2)
  {
    TreeNode* t = st.top();
    st.pop();

    TreeNode* l=new TreeNode;
    TreeNode* r=new TreeNode;
    if(arr[i]==-1)
      l = NULL;
    else
    {
      l->data = arr[i];
      l->left = NULL;
      l->right = NULL;
    }

    if(arr[i+1]==-1)
      r = NULL;
    else
    {
      r->data = arr[i+1];
      r->left = NULL;
      r->right = NULL;
    }

    t->left=l;
    t->right=r;

    st.push(t->right);
    st.push(t->left);
  }

  cout<<isValidBST(root)<<"\n";

  return 0;
}
