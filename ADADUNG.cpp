// ADADUNG - Ada and Manure

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,mod=1000000007;
    
    ll a[10001000];
    a[1]=0;a[2]=1;
    
    fab(i,3,10001000-1)
    a[i]=((i-1)*(a[i-1]+a[i-2]))%mod;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        cout<<a[n]<<ln;
    }
	return 0;
}
