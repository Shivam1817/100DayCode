class Solution {
  public:
    // Function to check whether the list is palindrome.
    Node* middleNode(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        
        }
        return slow;
    }
    Node* reverseUsingRec(Node* prev, Node* curr){
        if(curr == NULL) return prev;
        Node* nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
        reverseUsingRec(prev,curr);
    }
    bool isPalindrome(Node *head) {
        // Your code here
        if(head == NULL || head->next == NULL) return true;
        
        Node* midnode = middleNode(head);
       // cout<<midnode->data;
        Node* head2 = midnode->next;
        midnode->next = NULL;
        
        Node* prev = NULL;
        Node* curr = head2;
        head2 = reverseUsingRec(prev,curr);
        
        while(head2 != NULL){
            if(head2->data != head->data){
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};
