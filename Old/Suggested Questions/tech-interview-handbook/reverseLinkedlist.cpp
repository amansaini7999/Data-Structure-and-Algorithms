#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode* next;
};

ListNode* reverseList(ListNode* head)
{
  ListNode* prev = NULL;
  ListNode* next = head;
  ListNode* curr = head;

  while(curr!=NULL)
  {
    next=curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

int main()
{
  int n;
  cin>>n;

  ListNode* head=NULL;

  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;

    ListNode* temp=new ListNode;
    temp->val = x;
    temp->next=NULL;

    if(head==NULL)
      head = temp;
    else
    {
      ListNode* t=head;
      while(t->next!=NULL)
        t = t->next;
      t->next = temp;
    }
  }

  ListNode* temp = reverseList(head);
  while(temp!=NULL)
  {
    cout<<temp->val<<" ";
    temp = temp->next;
  }

  return 0;
}
