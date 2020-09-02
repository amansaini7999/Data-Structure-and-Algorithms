// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {

        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    Node *fast = head;
    stack<int> s;

    while(fast!=NULL && fast->next!=NULL)
    {
      s.push(head->data);
      head = head->next;
      fast = fast->next->next;
    }

    /*while(!s.empty())
    {
      cout<<s.top();
      s.pop();
    }*/

    if(fast!=NULL)
      head = head->next;

    //cout<<" "<<head->data<<" ";

    while(!s.empty())
    {
      int top = s.top();
      s.pop();

      if(head==NULL)
        return 0;

      if(top!=head->data)
        return 0;

      head = head->next;
    }
    return 1;
}
