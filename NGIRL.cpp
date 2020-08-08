// NGIRL - Namit In Trouble

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
#define ln "\n"
using namespace std;
int main()
{
    FAST;
    ll t,n=1000500,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
	ll prime[n+1];vll v;
	
	for(int i = 1; i <= n; i++)
	prime[i] = i;
	for(int i = 2; i*i <= n; i++)
	{
		if(prime[i] != -1)
		{
			for(int j = 2*i; j <=n ; j += i)
			prime[j]=-1;
		}
	}
    fab(i,2,n)
    {
        if(prime[i]!=-1)
        v.pb(prime[i]*prime[i]);
    }
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        
        l=ub(all(v),n)-v.begin();
        r=ub(all(v),k)-v.begin();
        
        if(r>=l)
        r=l;
        cout<<l<<" "<<l-r<<ln;//" "<<r<<ln;
        
    }
	return 0;
}
