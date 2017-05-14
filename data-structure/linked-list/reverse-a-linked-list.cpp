/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
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
