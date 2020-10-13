// FATAWY - Fatawy

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

vll adj[1000];
ll vis[1000];

ll lcs(string s1,string s2)//longest common subsequence
{
	ll n,m,i,j,mxelmn=0;
	n=s1.size();
	m=s2.size();
	ll lcs[n+1][m+1];
	
	f0(i,n+1)
	{
		f0(j,m+1)
		{
			
			if(i==0||j==0)
			{
				lcs[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				lcs[i][j]=lcs[i-1][j-1]+1;
			}
			else
			{
			    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
	}
	
	return lcs[n][m];
}

void dfs(ll n)
{
    vis[n]=1;
    for(auto it:adj[n])
    {
        if(vis[it]==0)
        dfs(it);
    }
}

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,sum,ans,tmp,it,pos,avg,m,cnt;
    cin>>t;
    ld prcnt;
    ll iti=0;
    while(t--)
    {
    	string s1,s2;
        cin>>n>>prcnt;
        
        unordered_map<string,ll> mappu;
        vector<string> v;
        ans=0;cnt=1;
        f0(i,n)
        {
            cin>>s1;
            v.pb(s1);
            mappu[s1]=-1;
        }
        
        f0(i,n)
        {
            vis[i]=0;
            adj[i].clear();
        }
        
        // cout<<"Size: "<<v.size()<<ln;
        f0(i,n)
        {
            fab(j,i+1,n-1)
            {
                tmp=lcs(v[i],v[j]);
                ld l=((100.0*tmp)/(ld)v[i].size());
                ld r=((100.0*tmp)/(ld)v[j].size());
                // cout<<l<<" "<<r<<ln;
                if(l>=prcnt&&r>=prcnt)
                {
                    adj[j].pb(i);
                    adj[i].pb(j);
                    // cout<<i<<" "<<j<<ln;
                }
            }
        }
        
        // hi;
        f0(i,n)
        {
            if(vis[i]==0)
            {
                dfs(i);
                ans++;
            }
        }
        
        cout<<"Case #"<<++iti<<":"<<ln;
        cout<<ans<<ln;
    }
	return 0;
}
