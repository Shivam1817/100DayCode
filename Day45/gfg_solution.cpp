//Root to leaf paths sum

class Solution {
  public:
    void dfs(Node* root,int& ans,int val){
        if(!root) return;
        val = val*10+ root->data;
        if(root->left == NULL && root->right == NULL){
            ans += val;
        }
        dfs(root->left,ans,val);
        dfs(root->right,ans,val);
    }
    int treePathsSum(Node *root) {
        // code here.
        int ans = 0;
        dfs(root,ans,0);
        return ans;
    }
};
