//Sort a k sorted doubly linked list

class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        DLLNode *n1 = head;
        DLLNode *n2 = head;
        int gap = 0;
        while(n1){
            pq.push(n1->data);
            n1 = n1->next;
            if(gap >= k){
                n2->data = pq.top();
                pq.pop();
                n2 = n2->next;
            }
            else gap++;
        }
        while(n2){
            n2->data = pq.top();
            pq.pop();
            n2 = n2->next;
        }
        return head;
    }
};
