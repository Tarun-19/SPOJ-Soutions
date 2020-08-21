// NDT - New Data Type

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define memo(a,b) memset(a,b,sizeof(a))
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;

ll power(ll x,ll y,ll p)
{ll res=1;x=x%p;if(x==0)return 0;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}


int main()
{
    
    FAST;
    ll t,n,i,j,ans,m;
    string s;
    ll a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m;
        
        ans=power(a,b,m);
        
        if(ans==0)
        ans=m;
        
        cout<<ans<<ln;
    }
	return 0;
}
