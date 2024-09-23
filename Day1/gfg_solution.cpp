vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    int MissingNo = -1, RepeatingNo = -1;
    vector<int> vec(n + 1, 0);

    for (int i = 0; i < n; i++) {
        vec[arr[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (vec[i] == 0) {
            MissingNo = i;
        }
        if (vec[i] == 2) {
            RepeatingNo = i;
        }
    }
    return {RepeatingNo, MissingNo};
}