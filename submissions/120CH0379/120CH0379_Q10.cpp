class Solution {
public:
      int search(vector<int>& a, int t) 
    {
        int n=a.size();
        int s=0,e=n-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(a[m]==t)
            {
                return m;
            }
            else if(a[m]>=a[s])
            {
                if(a[m]>=t && a[s]<=t)
                    e=m-1;
                else
                    s=m+1;
            }
            else 
            {
                if(a[m]<=t && a[e]>=t)
                    s=m+1;
                else
                   e=m-1;
            }
        }
        return -1;
    }
};
