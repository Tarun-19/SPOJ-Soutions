// KNMOVE - Knight Move

/*  Author: cf:Tarun_19/cc:tarun_19_
    E-mail: tarunkumar281200@gmail.com
=========="Impossible only means that you haven't found the solution yet"=======
*/#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define prqueue priority_queue<ll,vector<ll>,greater<ll>>
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
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define hi cout<<"hi\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ln "\n"
using namespace std;
ll dx[]={2,2,-2,-2,1,1,-1,-1};
ll dy[]={-1,1,1,-1,2,-2,2,-2}; 

ll vis[1010][1010],mv[1010][1010];
ll n;
void reset()
{
    ll i,j;
    f0(i,1010)
    f0(j,1010)
    vis[i][j]=0,mv[i][j]=-1;
}


void min_knight_moves(pair<ll,ll> knt,pair<ll,ll> trg)
{
    ll ans,tmp,k,x,y;
    pair<ll,ll> pr;
    queue<pair<ll,ll>> q;
    q.push(knt);
    vis[knt.ff][knt.ss]=1;
    mv[knt.ff][knt.ss]=0;
    
    if(knt==trg) return;
    
    while(!q.empty())
    {
        pr=q.front();
        q.pop();vis[pr.ff][pr.ss]=1;
        
        f0(k,8)
        {
            x=pr.ff+dx[k];
            y=pr.ss+dy[k];
            
            if(x<1||y<1||x>n||y>n) continue;
            if(vis[x][y]) continue;
            
            vis[x][y]=1;
            // cout<<x<<","<<y<<" ";
            mv[x][y]=mv[pr.ff][pr.ss]+1;
            if(x==trg.ff&&y==trg.ss) goto lbl;
            q.push({x,y});
        }
    }
    lbl:return;
}

int main()
{
    FAST;
    ll t,ans,m,cnt,x,y,i,j;
    string s1,s2;
    pair<ll,ll> pr;
    
    n=1009;
    reset();
    min_knight_moves({1,1},{1009,1009});
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cout<<mv[x][y]<<ln;
    }
	return 0;
}
