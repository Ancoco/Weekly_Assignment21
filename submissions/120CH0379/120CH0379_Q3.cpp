class Solution{
    public:
    bool subArrayExists(int a[], int n)
    {
        int sum=0;
        set <int> S;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(sum==0||S.count(sum))
            return true;
            S.insert(sum);
        }
        return false;
    }
};
