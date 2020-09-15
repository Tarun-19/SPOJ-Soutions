// AGPC01G - Eat Pray Love

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
#define fabr(i,a,b) for(i=b;i>=a;i--)
using namespace std;

ll a[1000010];

void precompute()
{
    ll i;
    a[1]=1;
    a[2]=2;
    fab(i,3,1000010)
    a[i]=(a[i-1]+(i-1)*a[i-2])%1000000007;
}


int main()
{
    FAST;
    ll t,n,i,j,k,l,p,q,r,ans,x,y,z;
    precompute();
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }
	return 0;
}

