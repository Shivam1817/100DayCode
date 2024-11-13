//Intersection Point in Y Shaped Linked Lists

class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1 != temp2){
            if(temp1 == NULL) temp1 = head2;
            else if(temp2 == NULL) temp2 = head1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return temp1->data;
    }
};
