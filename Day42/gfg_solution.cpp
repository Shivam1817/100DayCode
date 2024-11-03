//Is Linked List Length Even?

class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        int cnt = 0;
        Node* temp = *head;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return (cnt%2==0)?true:false;
    }
};
