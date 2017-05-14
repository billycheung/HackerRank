/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
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
