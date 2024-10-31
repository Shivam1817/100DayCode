//Insert in Sorted way in a Sorted DLL

class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        Node* root = head;
        Node* temp = new struct Node;
        temp->data = x;
        if (!root || root->data >= x) {
            temp->next = head;
            return temp;
        }
        while (root->next && root->next->data < x) {
            root = root->next;
        }
        temp->next = root->next;
        root->next = temp;

        return head;
    }
};
