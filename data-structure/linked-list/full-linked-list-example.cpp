#include <iostream>
#include <stack>
using namespace std;
  struct Node
  {
     int data;
     struct Node *next;
  };

void Print(Node *head)
{
    if (head != NULL){
        cout << head->data << endl;
        Print(head->next);
    }
}
Node* InsertHead(Node *head, int data){
  Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head != NULL){
      temp->next = head;
    }
    return temp;
}

Node* InsertTail(Node *head,int data)
{
  Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head != NULL){
      Node* last = head;
      while (last->next) last = last->next;
      last->next = temp;
    }
    else{
      head = temp;
    }
    return head;
}

Node* InsertNth(Node* head, int data, int position){
  Node* temp = new Node();
    temp->data = data;

    if (head == NULL){
      temp->next = NULL;
      return temp;
    }

  if (position == 0){
    temp->next = head;
    return temp;
  }

  Node* last = head;
  for (int i=0; i<position-1; i++)
    last = last->next;
  temp->next = last->next;
  last->next = temp;
    return head;
}

Node* Delete(Node *head, int position)
{
   Node* last = head;
   if (position == 0){
      return head->next == NULL ? NULL : head-> next;
   }

   for (int i=0; i<position-1; ++i){
      last = last->next;
   }
   last->next = last->next->next;
   return head;
   
}

Node* DeleteRecursive(Node *head, int position) {
    if (position == 0){ return head->next; }
    head->next = DeleteRecursive(head->next, position-1);
    return head;
}

void ReversePrint(Node *head)
{
  if (head != NULL){
    ReversePrint(head->next);
    cout << head->data << endl;
  }
}
Node* Reverse(Node *head)
{
  Node* tail = NULL, *tmp;
  while (head != NULL){
    tmp = head->next;
    head->next = tail;
    tail = head;
    head = tmp;
  }
  return tail;
}

Node* ReverseRecursive(Node *head){
  if (head == NULL || head->next == NULL)
    return head;

  Node* remaining = ReverseRecursive(head->next);
  head->next->next = head;
  head->next = NULL;
  return remaining;
}

int CompareLists(Node *headA, Node* headB)
{
    while (headA != NULL && headB != NULL && headA->data == headB->data){
      headA = headA->next;
      headB = headB->next;
    }
    return (headA == NULL && headB == NULL);
}

Node* MergeLists(Node *headA, Node* headB)
{
  Node* head;
  if (headA == NULL) return headB;
  if (headB == NULL) return headA;
  
  if (headA->data <= headB->data){
    head = headA;
    headA = headA->next;
  }
  else {
    head = headB;
    headB = headB->next;
  }

  Node* tmp = head;
  while (headA != NULL && headB != NULL){
    Node* curr;
    if (headA->data <= headB->data){
      curr = headA;
      headA = curr->next;
    }
    else {
      curr = headB;
      headB = curr->next;
    }
    tmp->next = curr;
    tmp = curr;
    }

  if (headA == NULL){
    tmp->next = headB;
  }

  if (headB == NULL){
    tmp->next = headA;
  }
    return head;
}

Node* MergeListsRecursive(Node *headA, Node* headB)
{
  return headA;
}

int GetNode(Node* head, int positionFromTail){
  int size = 0;
  Node* tmp = head;
  while (tmp != NULL){
    size++;
    tmp = tmp->next;
  }

  int position = size - 1 - positionFromTail;
  for (int i=0; i<position; i++){
    head = head->next;
  }
  return head->data;
}

bool has_cycle(Node* head) {
  if (head == NULL){
    return false;
  }
    Node* fast = head;
    Node* slow = head;
    do{
      slow = slow->next;
      fast = fast->next;
      if (fast != NULL)
        fast = fast->next;
    } while (fast != slow && fast != NULL);
    return fast != NULL;
}


int main(){
  Node* head = NULL;
  head = InsertTail(head, 1);
  head = InsertTail(head, 3);
  head = InsertTail(head, 5);
  head = InsertTail(head, 7);
  //head = InsertHead(head, 0);

  Print(head);
  cout << "-----" << endl;
  Node* head2 = NULL;
  head2 = InsertTail(head2, 2);
  head2 = InsertTail(head2, 4);
  head2 = InsertTail(head2, 6);
  head2 = InsertTail(head2, 8);


  //head2 = InsertTail(head2, 7);

  Print(head2);
  cout << "-----" << endl; 
  //cout << CompareLists(head, head2) << endl;
  head = MergeLists(head,head2);
  Print(head);
  cout << "-----" << endl; 
  cout << GetNode(head, 2) << endl;
  //ReversePrint(head);
}
