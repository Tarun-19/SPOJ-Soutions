// PARTY - Party Schedule

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f1(i,n) for(i=1;i<=n;i++)
#define f0(i,n) for(i=0;i<n;i++)
#define ln "\n"
using namespace std;
void knapsnack(ll B,ll x,ll price[],ll fun[])
{
    ll i,j;
    ll ans[x+1][B+1];
    ll sum[x+1][B+1];
    f0(i,x+1)
    f0(j,B+1)
    {
    	ans[i][j]=0;
    	sum[i][j]=0;
    }
    
    f1(i,x)
    {
        f1(j,B)
        {
            if(j-price[i-1]<0)
            ans[i][j]=ans[i-1][j];
            else
            ans[i][j]=max(fun[i-1]+ans[i-1][j-price[i-1]],ans[i-1][j]);
        }
    }
    f0(i,B+1)
    if(ans[x][i]==ans[x][B])//min cost at which we got max fun.
    break;
    
    
    cout<<i<<" "<<ans[x][B]<<ln;
}

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    while(1){
    ll B;
    
    cin>>B>>x;
    if(B==x&&x==0)
    break;
    
    ll price[x];
    ll fun[x];
    
    f0(i,x)
    cin>>price[i]>>fun[i];
    
    knapsnack(B,x,price,fun);
    
    }
	return 0;
}
