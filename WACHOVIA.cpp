// WACHOVIA - Wachovia Bank

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f1(i,n) for(i=1;i<=n;i++)
#define f0(i,n) for(i=0;i<n;i++)
#define ln "\n"
using namespace std;
void knapsnack(ll k,ll m,ll wt[],ll val[])
{
    ll i,j;
    ll ans[m+1][k+1]={0};
    f0(i,m+1)
    f0(j,k+1)
    ans[i][j]=0;
    
    f1(i,m)
    {
        f1(j,k)
        {
            if(j-wt[i-1]<0)
            ans[i][j]=ans[i-1][j];
            else
            ans[i][j]=max(val[i-1]+ans[i-1][j-wt[i-1]],ans[i-1][j]);
        }
    }
    cout<<"Hey stupid robber, you can get "<<ans[m][k]<<"."<<ln;
    /*f0(i,m+1)
    {
        f1(j,k+1)
        cout<<ans[i][j]<<" ";
        cout<<ln;
    }*/
}

int main()
{
    FAST;
    ll t,n,m,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    cin>>t;
    while(t--){
    
    cin>>k>>m;
    
    ll wt[m],val[m];
    
    f0(i,m)
    cin>>wt[i]>>val[i];
    
    knapsnack(k,m,wt,val);
    }
	return 0;
}
