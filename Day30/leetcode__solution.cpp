//2583. Kth Largest Sum in a Binary Tree

class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        if(root == NULL) return -1;
        vector<long long> levelsums;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelsize = q.size();
            long long levelsum = 0;
            for(int i = 0 ; i < levelsize ; i++){
                auto node = q.front();
                q.pop();
                levelsum += node->val;
                if(node ->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }
            levelsums.push_back(levelsum);
        }
        if(k > levelsums.size()) return -1;
        sort(levelsums.begin(),levelsums.end(),greater<long long>());
        return levelsums[k-1];
    }
};
