// RPLD - Database

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
int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,r;
    vll v;
    cin>>t;c=0;
    while(t--)
    {
        c++;
        cout<<"Scenario #"<<c<<": ";
        cin>>n>>r;
        
        map <pair<ll,ll>,ll> m;
        
        f=0;
        f0(i,r)
        {
            cin>>x>>y;
            
            m[make_pair(x,y)]++;
            
            if(m.at(make_pair(x,y))>=2)
            f=1;
        }
        
        if(f)
        cout<<"impossible\n";
        else
        cout<<"possible\n";
    }
	return 0;
}
