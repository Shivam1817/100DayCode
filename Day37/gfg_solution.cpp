//Quick Sort on Linked List

class Solution {
    struct Compare {
        bool operator()(Node* a, Node* b) {
            return a->data > b->data; // Min-heap based on `data` values
        }
    };
  public:
    struct Node* quickSort(struct Node* head) {
        // code here
        priority_queue<Node*, vector<Node*>, Compare> pq;
        Node* temp = head;
        while(temp != NULL){
            pq.push(temp);
            temp = temp -> next;
        }
        Node* sortedHead = pq.top();
        pq.pop();
        Node* current = sortedHead;
    
        // Re-link nodes in sorted order
        while (!pq.empty()) {
            current->next = pq.top();
            pq.pop();
            current = current->next;
        }
        current->next = NULL;
        return sortedHead;
    }
};
