// ADAFRIEN - Ada and Friends

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

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    string s;
    char ch;
    unordered_map <string,ll> m;
    cin>>n>>k;
    
    f0(i,n)
    {
        cin>>s>>x;
        m[s]+=x;
    }
    vll v;
    for(auto it: m)
    {
        v.pb(it.second);
        // cout<<it.second<<" ";
    }
    sort(all(v));
    
    p=0;
    f0r(i,v.size())
    {
        if(!k)
        break;
        k--;
        // cout<<v[i]<<" ";
        p+=v[i];
    }
    
    cout<<p;
    
	return 0;
}
