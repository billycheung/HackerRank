/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

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
