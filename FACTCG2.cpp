// FACTCG2 - Medium Factorization

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define display(x) for(auto dsp:x)cout<<" x "<<dsp;cout<<"\n";
#define hi cout<<"hi\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define ln "\n"
using namespace std;

ll spf[10000010];//smallest prime factor;)

void sieve()
{
    ll i,j;
    f0(i,10000010-1)
    spf[i]=i;
    
    for(i=2;i*i<=10000005;i++)
    if(spf[i]==i)
    {
        for(j=i*i;j<10000005;j+=i)
        if(spf[j]==j)
        spf[j]=i;
    }
}


vll factors(ll n)
{
    vll v;//v.pb(1);//1 is not pushed
    while(n!=1)
    {
        v.pb(spf[n]);
        n/=spf[n];
    }
    return v;
}

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    sieve();
    
    // f0(i,100) cout<<spf[i]<<" ";
    while(cin>>n)
    {
        cout<<"1";
        vll v=factors(n);
        display(v);
    }
	return 0;
}
