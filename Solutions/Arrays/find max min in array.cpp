
pair<long long, long long> getMinMax(long long a[], int n) {
    long long min,max;
    
    long long i=0;
    min = max = a[i];
    for(i=1; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    
    pair<long long, long long> ans = make_pair(min, max);
    return ans;
}
