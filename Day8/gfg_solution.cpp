class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void dfs(vector<int> &ans, Node* root){
        if(root == NULL) return;
        ans.push_back(root->data);
        dfs(ans,root->left);
        dfs(ans,root->right);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> ans;
        dfs(ans,root1);
        dfs(ans,root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
