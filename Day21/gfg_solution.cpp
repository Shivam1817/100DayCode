//Delete Alternate Nodes

class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node* temp = head;
        while(temp != NULL && temp->next != NULL){
            Node* nex = temp->next;
            temp->next = nex->next;
            delete nex;
            temp = temp->next;
        }
    }
};
