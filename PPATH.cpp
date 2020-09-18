// PPATH - Prime Path

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

ll vis[10000];
vll adj[10000];
ll dis[10000];
vll v;

void reset()
{
    ll i;
    f0(i,10000)
    {
        vis[i]=0;
        adj[i].clear();
    }
}


void bfs(ll n)
{
    queue<ll> q;
    q.push(n);
    vis[n]=1;dis[n]=0;
    
    while(!q.empty())
    {
        ll cur=q.front();
        q.pop();
        
        for(auto child:adj[cur])
        {
            if(vis[child]) continue;
            
            vis[child]=1;
            q.push(child);
            dis[child]=dis[cur]+1;
        }
    }
}


bool isPrime(ll n)
{if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

bool check(ll n,ll m)
{
    ll c=0;
    while(n>0)
    {
        if(n%10!=m%10) c++;
        n/=10,m/=10;
    }
    if(c==1) return true;
    return false;
}

void buildgraph()
{
    ll i,j;
    fab(i,1000,9999)
    if(isPrime(i))
    v.pb(i);
    
    
    f0(i,v.size())
    fab(j,i+1,v.size()-1)
    if(check(v[i],v[j]))
    adj[v[i]].pb(v[j]),adj[v[j]].pb(v[i]);
    
}





int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m;
    ll u,v;z=0;
    
    reset();
    buildgraph();
    
    
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        
        f0(i,10000) dis[i]=-1,vis[i]=0;
        
        dis[n]=0;
        bfs(n);
        
        cout<<dis[m]<<ln;
        
    }
	return 0;
}
