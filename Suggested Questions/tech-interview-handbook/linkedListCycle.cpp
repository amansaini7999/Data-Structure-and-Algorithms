#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode* next;
};

bool hasCycle(ListNode *head)
{
  ListNode* slow = head;
  ListNode* fast = head;

  while(slow->next!=NULL && fast->next->next!=NULL)
  {
    slow = slow->next;
    fast = fast->next->next;

    if(slow==fast)
      return 1;
  }
  return 0;
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

  if(hasCycle(head))
    cout<<"true";
  else
    cout<<"false";

  return 0;
}
