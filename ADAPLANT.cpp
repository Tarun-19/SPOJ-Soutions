// ADAPLANT - Ada and Plants

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
#define memo(a,b) memset(a,b,sizeof(a))//ch,0,-1
#define lcm(x,y) boost::math::lcm(x,y)
//#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";
#define display(x) for(auto dsp:x)cout<<dsp<<" ";
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;
const ld pi=acos(-1);
const ll mod=1e9+7;
const ll MAX=INT_MAX;
const ll MIN=INT_MIN;

bool sortbysec(pair<ll,ll> a,pair<ll,ll> b)
{
    return (a.second<b.second);
}

ll po(ll a,ll p)
{ll ret = 1;while(p){if(p&1)ret = (ret*a)%mod;a=(a*a)%mod;p=p>>1;}return ret%mod;}
//strstream


int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m;
    string s;
    char ch;
    vll v;
    
    
    cin>>t;
    while(t--)
    {
        cin>>n>>k;f=0;sum=0;p=0;q=0;ans=-1;
        
        multiset<ll> st;
        ll a[n];
        f0(i,n)
        cin>>a[i];
        
        pos=0;
        f1(i,n)
        {
            x=a[i-1];
            
            if(i<=k+2)
            {
                st.insert(x);
                // ans=(ans,*(st.end()-1)-*(st.begin()));
                ans=max(ans,*(st.rbegin())-*(st.begin()));
                continue;
            }
            
            
            st.insert(x);
            // if(i>=k)
            st.erase(st.find(a[pos]));
            pos++;
            
            
            // ans=(ans,*(st.end()-1)-*(st.begin()));
            ans=max(ans,*(st.rbegin())-*(st.begin()));
        }
        
        cout<<ans<<ln;
        
    }
	return 0;
}
