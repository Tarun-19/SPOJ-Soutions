// SBANK - Sorting Bank Accounts

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

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    string s;
    char ch;
    vll v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin.ignore();
        map<string,ll> mp;
        f0(i,n)
        {
            getline(cin,s);
            mp[s]++;
        }
        
        
        for(auto x:mp)
        cout<<x.ff<<" "<<x.ss<<ln;
        cout<<ln;
    }
	return 0;
}
