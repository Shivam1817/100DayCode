//Occurence of an integer in a Linked List

class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int cnt = 0;
        while(head != NULL){
            if(head->data == key)cnt++;
            head = head->next;
        }
        return cnt;
    }
};
