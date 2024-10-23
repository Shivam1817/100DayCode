//Find the Sum of Last N nodes of the Linked List

int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        Node* temp = head;
        int size = 0;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        temp = head;
        int ans = 0;
        int start = size-n;
        while(temp != NULL){
            if(start == 0){
                ans += temp->data;
            }
            else start--;
            temp = temp->next;
        }
        return ans;
    }
