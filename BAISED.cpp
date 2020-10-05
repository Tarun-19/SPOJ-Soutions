// BAISED - Biased Standings

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define fabr(i,a,b) for(i=b;i>=a;i--)
using namespace std;
int main()
{
    FAST;
    ll t,n,i,j,k,l,p,q,r,ans,avg,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        string s;
        vector<pair<ll,string>> v;
        ll a[n];
        fab(i,0,n-1)
        {
            cin>>s>>p;
            v.push_back({p,s});
        }
        
        sort(v.begin(),v.end());
        
        ans=0;
        fab(i,0,n-1)
        ans+=abs(v[i].first-i-1);
        
        cout<<ans<<endl;
        
    }
	return 0;
}
