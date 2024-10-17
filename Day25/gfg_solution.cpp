//Split Linked List Alternatingly

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        Node* h1 = head;
        Node* h2 = head->next;
        Node* temp1 = h1;
        Node* temp2 = h2;
        while(temp1 != NULL && temp2 != NULL){
            temp1->next = temp2->next;
            temp1 = temp1 ->next;
            if(temp1 == NULL){
                temp2->next = NULL;
                return{h1,h2};
            }
            temp2->next = temp1->next;
            temp2 = temp2->next;
        }
        return {h1,h2};
    }
};
