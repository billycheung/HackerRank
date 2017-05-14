/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
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
