// BIO1 - Rooks

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
#define fabr(i,a,b) for(i=b;i>=a;i--)
using namespace std;

ll mod=1e9+7;

ll power(ll x,ll y)//0^0=1
{ll res=1;x=x%mod;if(x==0)return 0;while(y>0){if(y&1)res=(res*x)%mod;y=y>>1;x=(x*x)%mod;}return res;}
ll inverse(ll n)
{return power(n,mod-2);}

int main()
{
    FAST;
    ll t,n,i,j,k,l,p,q,r,ans,avg,sum,cnt,x,m;
    t=1;
    
    ll a[1000100];
    a[0]=a[1]=1;
    
    fab(i,2,1000100-1)
    a[i]=(a[i-1]*i)%mod;
    
    while(t--)
    {
        cin>>n>>m>>k;
        
        if(k>n||k>m)
        {
            cout<<0;
            continue;
        }
        
        ans=a[n];
        ans=(ans*a[m])%mod;
        ans=(ans*inverse(a[k]))%mod;
        ans=(ans*inverse(a[n-k]))%mod;
        ans=(ans*inverse(a[m-k]))%mod;
        
        cout<<ans;
    }
	return 0;
}

