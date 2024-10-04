//Deletion and Reverse in Circular Linked List

class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        // code here
        Node* prev = NULL;
        Node* curr = head;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            if(curr == head) break;
        }
        curr->next = prev;
        return prev;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        if(head->data == key){
            Node* del = head;
            head = head->next;
            Node* curr = head;
            while(curr->next != del) curr = curr->next;
            curr->next = head;
            delete del;
        }else{
            Node* prev = head;
            Node* curr = head->next;
            while(curr->data != key && curr!= head){
                prev = curr;
                curr = curr->next;
            }
            if(curr->data == key){
                prev->next = curr->next;
                delete curr;
            }
        }
        return head;
    }
};
