class Solution{
public:

	long long max(long long a,long long b)
	{
	    if(a>b)
	    return a;
	    return b;
	}
		long long min(long long a,long long b)
	{
	    if(a<b)
	    return a;
	    return b;
	}
	long long maxProduct(int *a, int n) 
	{
	   long long ma=a[0],mi=a[0],mp=a[0];
	   for(int i=1;i<n;i++)
	   {

	       if(a[i]<0)
	       {
	           swap(mi,ma);
	       }
	           ma=max(ma*a[i],a[i]);
	           mi=min(mi*a[i],a[i]);
	       
	        mp=max(mp,ma);
	   }
	   return mp;
	}
};
