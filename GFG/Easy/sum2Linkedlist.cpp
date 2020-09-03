// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;

    Node* head = new Node(val);
    Node* tail = head;

    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;

        cin>>n;
        Node* first = buildList(n);

        cin>>m;
        Node* second = buildList(m);

        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

Node* reverse(Node* node)
{
  Node* temp;
  Node* prev = NULL;

  while(node!=NULL)
  {
    temp = node->next;
    node->next = prev;
    prev = node;
    node = temp;
  }
  return prev;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    first = reverse(first);
    second = reverse(second);

    Node* sum=NULL;
    int carry=0;

    while(first!=NULL || second!=NULL)
    {
      int f, s;

      if(first==NULL)
        f = 0;
      if(second==NULL)
        s = 0;
      if(first!=NULL)
      {
        f = first->data;
        first = first->next;
      }
      if(second!=NULL)
      {
        s = second->data;
        second = second->next;
      }

      int add = f + s + carry;

      carry = add/10;
      add = add%10;

      Node* temp = new Node(add);
      temp->next = sum;
      sum = temp;
    }

    if(carry!=0)
    {
      Node* temp = new Node(carry);
      temp->next = sum;
      sum = temp;
    }

    return sum;
}
