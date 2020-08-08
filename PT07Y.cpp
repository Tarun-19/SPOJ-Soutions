// PT07Y - Is it a tree
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
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define ff first
#define ss second
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
#define lcm(x,y) boost::math::lcm(x,y)
#define display(x) for(auto dsp:x)cout<<dsp<<" ";
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;

ll vis[1000000]={0};
vll adj[1000000];


void dfs(ll n)
{
    vis[n]=1;
    
    
    for(auto child:adj[n])
    {
        if(vis[child]==0)
        dfs(child);
    }
}

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m;
    t=1;
    while(t--)
    {
        cin>>n>>p;
        ll u,v;
        ll cnt=0;
        
        x=p;
        while(p--)
        {
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        
        
        cnt=0;
        fab(i,1,n)
        {
            if(vis[i]==0)
            {
                cnt++;
                dfs(i);
            }
        }
        
        if(cnt==1&&x==n-1)
        cout<<"YES"<<ln;
        else
        cout<<"NO"<<ln;
    }
	return 0;
}
