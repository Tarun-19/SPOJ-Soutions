// BYTESE2 - The Great Ball

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INOUT freopen(name".inp","r", stdin); freopen(name".out","w",stdout);
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define pb push_back
#define ppb pop_back
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define memo(a,b) memset(a,b,sizeof(a))
#define hi cout<<"hi\n";

#define ln "\n"

using namespace std;
const ld pi=acos(-1);
const ll mod=1e9+7;
const ll MAX=INT_MAX;
const ll MIN=INT_MIN;

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

short has[10000010];

int main()
{
    FAST;
    ll t,i,j,n,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    fast(t);
    while(t--)
    {
        fast(n);
        ans=0;
        
        memset(has,0,sizeof(has));
        
        f0(i,n)
        {
            fast(x);fast(y);
            has[x]=1;
            has[y]=-1;
        }
        c=0;
        f0(i,10000010)
        {
            c+=has[i];
            ans=max(ans,c);
        }
        
        
        cout<<ans<<ln;
        
    }
	return 0;
}
