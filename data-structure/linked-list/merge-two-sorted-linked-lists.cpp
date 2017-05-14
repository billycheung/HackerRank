/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
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
