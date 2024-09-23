vector<int> findTwoElement(vector<int>& arr) {
    long long n = arr.size();
    long long sum = (n*(n+1))/2;
    long long sqsum = (n*(n+1)*(2*n+1))/6;

    long long sumele = 0;
    for(int i = 0 ; i < n ; i++) sumele += arr[i];
    long long sumDiff = (sum - sumele);

    long long sqele = 0;
    for(int i = 0 ; i< n ; i++) sqele += (long long)arr[i]*arr[i];
    long long sqDiff = (sqsum - sqele);

    int missingnum = (sumDiff + (sqDiff / sumDiff)) / 2;
    int repeatingnum = (missingnum - sumDiff);

    return {repeatingnum,missingnum};
}
