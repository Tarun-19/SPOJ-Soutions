// ADACOINS - Ada and Coins

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
using namespace std;
bitset <100500> bt;
int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,tmp,it,pos;
    
    bt[0]=1;
    cin>>n>>q;
    while(n--)
    {
        cin>>x;
        bt|=bt<<x;
    }
    
    ll ans[100500]={0};
    fab(i,1,100500-1)
    ans[i]=ans[i-1]+bt[i];
    
    while(q--)
    {
        cin>>x>>y;
        cout<<ans[y]-ans[x-1]<<"\n";
    }
    
	return 0;
}
