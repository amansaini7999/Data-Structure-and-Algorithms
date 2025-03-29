#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node* left;
  node* right;
};

node* createBT(vector<int> v, int beg, int end)
{
  if(beg>end)
    return NULL;

  int mid = (beg+end)/2;

  node* temp = new node;
  temp->data = v[mid];;
  temp->left = NULL;
  temp->right = NULL;

  temp->left = createBT(v, beg, mid-1);
  temp->right = createBT(v, mid+1, end);

  return temp;
}

void printPreorder(node* temp)
{
  if(temp == NULL)
    return;

  cout<<temp->data<<" ";
  printPreorder(temp->left);
  printPreorder(temp->right);
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    vector<int> v;
    int n, t, i;

    cin>>n;

    for(i=0; i<n; i++)
    {
      cin>>t;
      v.push_back(t);
    }

    node* root = createBT(v, 0, v.size()-1);
    printPreorder(root);
    cout<<"\n";
  }

  return 0;
}
