//2458. Height of Binary Tree After Subtree Removal Queries

class Solution {
public:
    int level[100001];
    int height[100001];
    int levelmax[1000001];
    int levelsecondmax[1000001];
    int findheight(TreeNode* root,int lev){
        if(!root) return 0;
        level[root->val] = lev;
        height[root->val] = max(findheight(root->left,lev+1),findheight(root->right,lev+1))+1;
        if(levelmax[lev] < height[root->val]){
            levelsecondmax[lev] = levelmax[lev];
            levelmax[lev] = height[root->val];
        }else if(levelsecondmax[lev] < height[root->val]){
            levelsecondmax[lev] = height[root->val];
        }
        return height[root->val];
    }
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        findheight(root,0);
        vector<int> ans;
        for(auto &it:queries){
            int l = level[it];
            int tempans = l + (levelmax[l] == height[it]? levelsecondmax[l]:levelmax[l]) - 1;
            ans.push_back(tempans);
        }
        return ans;
    }
};
