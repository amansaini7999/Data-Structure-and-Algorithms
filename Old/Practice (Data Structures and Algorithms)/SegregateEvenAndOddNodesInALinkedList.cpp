#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node* next;
};
node* head = NULL;

void insert(int d)
{
  node* temp;
  node* t;
  temp = (node *)malloc(sizeof(node *));

  temp->data = d;
  temp->next = NULL;

  t = head;

  if(head == NULL)
    head = temp;

  else
  {
    while(t->next!=NULL)
      t = t->next;
    t->next = temp;
  }
}

void printSegregate(node* temp)
{
  node* t;
  t = temp;
  while(temp != NULL)
  {
    if(temp->data%2 == 0)
      cout<<temp->data<<" ";
    temp = temp->next;
  }
  temp = t;
  while(temp != NULL)
  {
    if(temp->data%2 != 0)
      cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<"\n";
}

int main()
{
  int t, n, d;

  cin>>t;

  while(t--)
  {
    cin>>n;
    while(n--)
    {
      cin>>d;
      insert(d);
    }
    printSegregate(head);
    head = NULL;
  }
  free(head);
  return 0;
}
