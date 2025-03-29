#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};
node* head = NULL;

void begInsert(int d)
{
  node* temp;
  temp = (node *)malloc(sizeof(node *));

  temp->data = d;
  temp->next = NULL;

  if(head == NULL)
    head = temp;
  else
  {
    temp->next = head;
    head = temp;
  }
}

void endInsert(int d)
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

void output(node* temp)
{
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

int main()
{
  int n, d;

  cin>>n;

  while(n--)
  {
    cin>>d;
    //begInsert(d);
    endInsert(d);
  }

  while(head != NULL)
  {
    cout<<head->data<<" ";
    head = head->next;
  }
  cout<<"\n";

  return 0;
}
