//Multiply two linked lists
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long num1 =0, num2 =0;
        const long long mod = 1e9+7;
        while(first != NULL){
            num1 =(num1*10+ first->data)%mod;
            first = first->next;
        }
        while(second != NULL){
            num2 =(num2*10+ second->data)%mod;
            second = second->next;
        }
        return (num1*num2)%mod;
    }
};
