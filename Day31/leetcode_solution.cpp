//2641. Cousins in Binary Tree II

class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        if(root == NULL) return root;
        queue<TreeNode*> q;
        q.push(root);
        int levelsum = root->val;
        while(!q.empty()){
            int n = q.size();
            int nextlevelsum = 0;
            while(n--){
                TreeNode* curr = q.front();
                q.pop();
                curr->val = levelsum - curr->val;
                int siblingsum = curr->left != NULL ? curr->left->val : 0;
                siblingsum += curr->right != NULL ? curr->right->val : 0;
                if(curr->left){
                    nextlevelsum += curr->left->val;
                    curr->left->val = siblingsum;
                    q.push(curr->left);
                }
                if(curr->right){
                    nextlevelsum += curr->right->val;
                    curr->right->val = siblingsum;
                    q.push(curr->right);
                }
            }
            levelsum = nextlevelsum;
        }
        return root;
    }
};
