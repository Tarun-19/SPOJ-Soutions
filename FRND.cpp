// FRND - FRIENDSHIP!!!

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
    // cin>>t;
    t=1;
    while(t--)
    {
        cin>>n;
        
        ll a[n],b[32]={0};
        fab(i,0,n-1)
        {
            cin>>a[i];
            
            bitset<32>bt(a[i]);
            f0(j,32) b[j]+=bt[j];
        }
        
        ans=0;
        f0(i,32)
        {
            ans+=b[i]*(n-b[i])*(1<<i);
        }
        
        cout<<ans;
    }
	return 0;
}
