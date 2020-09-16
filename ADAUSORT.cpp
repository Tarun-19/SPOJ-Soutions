// ADAUSORT - Ada and Unstable Sort

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ff first
#define ss second
#define f0(i,n) for(i=0;i<n;i++)
#define ln "\n"
using namespace std;

bool comparator(pair<ll,ll> a,pair<ll,ll> b)//(i+1,i)
{
    if(a.ff<b.ff)
    return true;
    else if(a.ff==b.ff)
    return a.ss>b.ss;
    else
    return false;
}

int main()
{
    FAST;
    ll it,t,w,r,g,b,tmp,tot,ans,n,i;
    t=1;
    while(t--)
    {
        cin>>n;
        vector<pair<ll,ll>> v(n);
        
        f0(i,n) cin>>v[i].ff,v[i].ss=i+1;
        sort(v.begin(),v.end(),comparator);
        
        f0(i,n) cout<<v[i].ss<<" ";
    }
	return 0;
}
