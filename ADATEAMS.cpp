// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;
const ll mod=1e9+7;

ll inv[1000100],fct[1000100];

ll power(ll x,ll y)
{ll res=1;x=x%mod;if(x==0)return 0;while(y>0){if(y&1)res=(res*x)%mod;y=y>>1;x=(x*x)%mod;}return res;}

ll inverse(ll n)
{return power(n,mod-2);}

ll nCk(ll n,ll k)
{ll i,r=1;if(n<k)return 0;for(i=n;i>n-k;i--)r=(r*i)%mod;for(i=1;i<=k;i++)r=(r*inv[i])%mod;return r;}

int main()
{
    FAST;
    ll n,a,b,d,x,y,i;
    fct[0]=1;
    
    for(i=0;i<1000100;i++)
    inv[i]=inverse(i);
    for(i=1;i<1000100;i++)
    fct[i]=(fct[i-1]*i)%mod;
    
    
    while(cin>>n>>a>>b>>d)
    {
        x=(((fct[n]*inverse(fct[a]))%mod)*inverse(fct[n-a]))%mod;
        y=(((fct[b]*inverse(fct[d]))%mod)*inverse(fct[b-d]))%mod;
        
        y=power(y,a);
        
        cout<<(x*y)%mod<<"\n";
    }
	return 0;
}
