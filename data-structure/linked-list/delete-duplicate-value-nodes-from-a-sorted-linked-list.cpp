/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  Node* curr = head;
  while (curr != NULL){
    while (curr->next != NULL && curr->data == curr->next->data){
      curr->next = curr->next->next;
    }
    curr = curr->next;
  }
  return head;
}
