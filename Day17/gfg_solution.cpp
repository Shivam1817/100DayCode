//Linked List Matrix

class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n = mat.size();
        vector<vector<Node*>> v(n,vector<Node*>(n,0));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < n ; j++){
                v[i][j] = new Node(mat[i][j]);
            }
        }
        for(int i = 0; i < n;i++){
            for(int j = 0 ; j < n ; j++){
                if(i<n-1) v[i][j]->down = v[i+1][j];
                if(j<n-1) v[i][j]->right = v[i][j+1];
            }
        }
        return v[0][0];
    }
};
