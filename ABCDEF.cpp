// ABCDEF - ABCDEF

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INOUT freopen(name".inp","r", stdin); freopen(name".out","w",stdout);
#define ll int
#define vll vector<ll>
#define pb push_back
#define ppb pop_back
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define ln "\n"
using namespace std;

bool fast(ll &x)
{
	char c,r=0,n=0;
	x=0;
		for(;;)
		{
			c=getchar_unlocked();
				if ((c<0) && (!r))
					return(0);
				if ((c=='-') && (!r))
					n=1;
				else
				if ((c>='0') && (c<='9'))
					x=x*10+c-'0',r=1;
				else
				if (r)
					break;
		}
		if (n)
			x=-x;
	return(1);
}

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    t=1;
    vll v1,v2;
    while(t--)
    {
        fast(n);
        ll a[n];
        f0(i,n)
        fast(a[i]);
        v1.clear();
        v2.clear();
        
        f0(i,n)
        f0(j,n)
        f0(k,n)
        v1.pb(a[i]*a[j]+a[k]);
        
        f0(i,n)
        f0(j,n)
        f0(k,n)
        if(a[k]!=0)
        v2.pb(a[k]*(a[i]+a[j]));
        
        sort(all(v1));
        sort(all(v2));
        
        ans=0;
        f0(i,v1.size())
        {
            tmp=ub(all(v2),v1[i])-lb(all(v2),v1[i]);
            ans+=tmp;
        }
        
        cout<<ans;
    }
	return 0;
}
