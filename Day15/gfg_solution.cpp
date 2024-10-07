//XOR Linked List

struct Node *insert(struct Node *head, int data) {
    // Code here
    struct Node* newNode = new Node(data);
    newNode -> npx = head;
    if(head){
        head->npx = XOR(head->npx,newNode);
    }
    head = newNode;
    return head;
    
}

vector<int> getList(struct Node *head) {
    // Code here
    vector<int> ans;
    struct Node* curr = head;
    struct Node* prev = NULL;
    struct Node* next;
    while(curr != NULL){
        ans.push_back(curr->data);
        next = XOR(prev,curr->npx);
        prev = curr;
        curr = next;
    }
    return ans;
}
