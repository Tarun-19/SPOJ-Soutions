// TDPRIMES - Printing some primes

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
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define ln "\n"
using namespace std;

vll primes;
const ll MAX=100000000;
bool isComposite[MAX+10]={false};
void sieve()
{
    isComposite[0]=isComposite[1]=true;//check
    for (int i=2; i*i<=MAX; i++)
    {
        if (isComposite[i]==false)
        for (int j=2; j*i<=MAX; j++)
        isComposite[i*j] = true;
    }
    for (int i=2;i<=MAX; i++)
    if(!isComposite[i])
    primes.pb(i);
}

int main()
{
    FAST;
    ll t,n,i,j,k;
    
    sieve();
    n=primes.size();
    for(i=0;i<=n;i+=100)
    cout<<primes[i]<<ln;
    
    
	return 0;
}
