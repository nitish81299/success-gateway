
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1
Using fast and slow pointers.
*/
int getMiddle(Node *head)
{
   Node *slow = head;
   Node *fast = head;
   
   while(fast != NULL && fast->next != NULL)
   {
       slow = slow->next;
       fast = fast->next->next;
   }
   
   return slow->data;
}
