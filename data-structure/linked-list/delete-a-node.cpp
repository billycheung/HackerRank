/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
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
