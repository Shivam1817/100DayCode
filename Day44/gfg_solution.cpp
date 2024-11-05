//Rotate by 90 degree

void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    reverse(mat.begin(),mat.end());
    for(int i = 0; i < mat.size()-1 ; i++){
        for(int j = i+1 ; j < mat.size() ; j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
}
