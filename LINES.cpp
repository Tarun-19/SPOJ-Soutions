// LINES - Game of Lines

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
ll po(ll a,ll p)
{ll ret = 1;while(p){if(p&1)ret = (ret*a)%mod;a=(a*a)%mod;p=p>>1;}return ret%mod;}
//strstream


int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,g,tmp,it,pos;
    vll v;
    
    while(cin>>n)
    {
        if(n==0)
        break;
        ll x[n],y[n];
        f0(i,n)
        cin>>x[i]>>y[i];
        
        map <pair<ll,ll>,ll> m;
        
        f0(i,n)
        {
            
            fab(j,i+1,n-1)
            {
                p=(y[i]-y[j]);
                q=(x[i]-x[j]);
                g=__gcd(p,q);
                p=p/g;q=q/g;
                
                
                if(p<0)//for handling perpendicular cases..
                {
                    p=abs(p);
                    q=-1*q;
                }
                m[make_pair(p,q)]++;
            }
        }
        cout<<m.size()<<ln;
    }
	return 0;
}
