/*
Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument) and inserts it at the tail of the linked list referenced by the head parameter. Once the new node is added, return the reference to the head node.

Note: If the  argument passed to the insert function is null, then the initial list is empty.
*/

      Node* insert(Node *head,int data)
      {
          Node* n = new Node(data);
          if (head == NULL){
              return n;
          }
          Node* curr = head;
          while (curr->next != NULL){
              curr = curr->next;
          }
          curr->next = n;
          return head;
      }
