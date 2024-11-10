//Union of Two Sorted Arrays with Distinct Elements

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
         set<int> st;
        
        for(int num : a) {
            st.insert(num);
        }
        
        for(int num : b) {
            st.insert(num);
        }
        
        vector<int> ans(begin(st), end(st));
        
        return ans;
    }
};
