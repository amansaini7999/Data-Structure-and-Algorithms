#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node* next;
};
node* unread=NULL;
node* read=NULL;
node* trash=NULL;

void insertUnread(int d)
{
  node* temp;
  temp = (node*)malloc(sizeof(node*));

  node* t;
  t = unread;

  temp->data = d;
  temp->next = NULL;

  if(unread == NULL)
    unread = temp;

  else
  {
    while(t->next != NULL)
      t = t->next;
    t->next = temp;
  }
}

void insertRead(int d)
{
  node* temp;
  temp = (node*)malloc(sizeof(node*));

  node* t;
  t = read;

  temp->data = d;
  temp->next = NULL;

  if(read == NULL)
    read = temp;

  else
  {
    while(t->next != NULL)
      t = t->next;
    t->next = temp;
  }
}

void insertTrash(int d)
{
  node* temp;
  temp = (node*)malloc(sizeof(node*));

  node* t;
  t = trash;

  temp->data = d;
  temp->next = NULL;

  if(trash == NULL)
    trash = temp;

  else
  {
    while(t->next != NULL)
      t = t->next;
    t->next = temp;
  }
}

void moveUnreadtoRead(int x)
{
  node* temp;
  temp = unread;

  if(temp->data == x)
  {
    temp = temp->next;
    unread = temp;
  }

  else
  {
    while(temp->next->data != x)
    temp = temp->next;

    temp->next = temp->next->next;
  }
  insertRead(x);
}

void moveReadtoTrash(int x)
{
  node* temp;
  temp = read;

  if(temp->data == x)
  {
    temp = temp->next;
    read = temp;
  }

  else
  {
    while(temp->next->data != x)
    temp = temp->next;

    temp->next = temp->next->next;
  }
  insertTrash(x);
}

void moveUnreadtoTrash(int x)
{
  node* temp;
  temp = unread;

  if(temp->data == x)
  {
    temp = temp->next;
    unread = temp;
  }

  else
  {
    while(temp->next->data != x)
    temp = temp->next;

    temp->next = temp->next->next;
  }
  insertTrash(x);
}

void moveTrashtoRead(int x)
{
  node* temp;
  temp = trash;

  if(temp->data == x)
  {
    temp = temp->next;
    trash = temp;
  }

  else
  {
    while(temp->next->data != x)
    temp = temp->next;

    temp->next = temp->next->next;
  }
  insertRead(x);
}

void print(node* temp)
{
  if(temp == NULL)
    cout<<"EMPTY";
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<"\n";
}

int main()
{
  int t, n, q, x, id;
  cin>>t;
  while(t--)
  {
    cin>>n>>q;

    for(int i=1; i<=n; i++)
      insertUnread(i);
    while(q--)
    {
      cin>>id;
      cin>>x;

      if(id == 1)
        moveUnreadtoRead(x);
      else if(id == 2)
        moveReadtoTrash(x);
      else if(id == 3)
        moveUnreadtoTrash(x);
      else
        moveTrashtoRead(x);
      }

      print(unread);
      print(read);
      print(trash);

      unread = NULL;
      read = NULL;
      trash = NULL;

    }

    free(unread);
    free(read);
    free(trash);
  return 0;
}
