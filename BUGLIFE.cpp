// BUGLIFE - A Bug’s Life

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

ll vis[1000000];
ll col[1000000];
vll adj[1000000];

void reset()
{
    ll i;
    f0(i,1000000)
    {
        vis[i]=0;
        col[i]=0;
        adj[i].clear();
    }
}

bool dfs(ll n,ll c)
{
    vis[n]=1;
    col[n]=c;
    
    for(auto child:adj[n])
    {
        if(vis[child]==0)
        {
            bool ok=dfs(child,c^1);
            if(ok==false)
            return false;
        }
        else
        if(col[n]==col[child])
        return false;
    }
    
    return true;
}

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m;
    ll u,v;z=0;
    cin>>t;
    while(t--)
    {
        z++;
        cin>>n>>p;
        reset();
        
        while(p--)
        {
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        
        f=0;
        fab(i,1,n)
        {
            if(vis[i]==0)
            {
                
                bool ok=dfs(i,0);
                if(ok==false)
                f=1;
            }
        }
        cout<<"Scenario #"<<z<<":"<<ln;
        
        
        if(f)
        cout<<"Suspicious bugs found!"<<ln;
        else
        cout<<"No suspicious bugs found!"<<ln;
        
    }
	return 0;
}
