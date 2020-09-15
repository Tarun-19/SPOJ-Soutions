// MECGROUP - project groups

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll unsigned long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
using namespace std;

ll nCr(ll n,ll k)
{
    ll C[k+1]={0};
    C[0]=1;
    for(ll i=1;i<=n;i++)
    for(ll j=min(i,k);j>0;j--)
    C[j]=C[j]+C[j-1];
    return C[k];
}

int main()
{
    FAST;
    ll tmp,t,n,i,j,k,l,p,q,r,ans,x,y;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>n;
        
        ans=0;
        fab(i,1,r)
        {
            if(n-i<4) break;
            
            x=nCr(r,i);
            y=nCr(l,n-i);
            ans+=x*y;
        }
        
        cout<<ans<<endl;
    }
	return 0;
}

