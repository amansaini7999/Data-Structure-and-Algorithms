#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node* next;
};

struct node* insertElements(int arr[], int n){
  struct node* head = NULL;
  struct node* t = NULL;

  for(int i=0; i<n; i++){
    struct node* temp;
    temp = new node;
    if(i!=0){
      temp->data = arr[i];
      temp->next = NULL;
      t->next = temp;
      t = t->next;
    }
    else{
      temp->data = arr[i];
      temp->next = NULL;
      head = temp;
      t = temp;
    }
  }
  return head;
}

void printList(struct node* head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}

struct node* mergeListHelper(struct node* list1, struct node* list2){
  struct node* out = NULL;
  struct node* temp = NULL;
  int ct=0;
  while(list1!=NULL && list2!=NULL){
    if(list1->data<list2->data){
      if(ct==0){
        temp = list1;
        list1 = list1->next;
        out = temp;
        ct=1;
      }
      else{
        temp->next = list1;
        temp = temp->next;
        list1 = list1->next;
      }
    }
    else{
      if(ct==0){
        temp = list2;
        list2 = list2->next;
        out = temp;
        ct=1;
      }
      else{
        temp->next = list2;
        temp = temp->next;
        list2 = list2->next;
      }
    }
  }

  if(list1!=NULL)
    temp->next = list1;
  else
    temp->next = list2;
  return out;
}

struct node* insertAtBegining(struct node* head, int data){
  struct node* temp = NULL;

  temp = new node();
  temp->data = data;
  temp->next = NULL;
  temp->next = head;
  head = temp;

  return head;
}

struct node* mergeFront(struct node* list1, struct node* list2){
  struct node* head=NULL;
  // struct node* temp;

  while(list1!=NULL && list2!=NULL){
    if(list1->data<list2->data){
      head = insertAtBegining(head, list1->data);
      list1 = list1->next;
    }
    else{
      head = insertAtBegining(head, list2->data);
      list2 = list2->next;
    }
  }

  while(list1!=NULL){
    head = insertAtBegining(head, list1->data);
    list1 = list1->next;
  }

  while(list2!=NULL){
    head = insertAtBegining(head, list2->data);
    list2 = list2->next;
  }

  return head;
}

struct node* mergeLinkedList(struct node* list1, struct node* list2, struct node* list3, struct node* list4){
  struct node* helper1 = mergeListHelper(list1, list2);
  struct node* helper2 = mergeListHelper(list3, list4);

  // 1 1 1 2 2 4  --> 4 2 2 1 1 1
  // 1 4 5 6 7

  struct node* finalAns = mergeFront(helper1, helper2);

  return finalAns;
}

int main(){
  int arr1[] = {1, 2, 4};
  int arr2[] = {1, 1, 2};
  int arr3[] = {1, 4, 5, 6, 7};
  int arr4[] = {-4, -1, 3 ,9};

  struct node* list1 = insertElements(arr1, 3);
  struct node* list2 = insertElements(arr2, 3);
  struct node* list3 = insertElements(arr3, 5);
  struct node* list4 = insertElements(arr4, 4);

  struct node* output = mergeLinkedList(list1, list2, list3, list4);
  printList(output);

  return 0;
}
