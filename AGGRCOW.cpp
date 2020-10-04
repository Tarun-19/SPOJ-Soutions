// AGGRCOW - Aggressive cows

/*  Author: cf:Tarun_19/cc:tarun_19_
    E-mail: tarunkumar281200@gmail.com
=========="Impossible only means that you haven't found the solution yet"=======
*/#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define ln "\n"
using namespace std;
ll check(ll a[],ll n,ll md)
{
    ll c=1,i,prv=a[0];
    
    f1(i,n-1)
    if(a[i]-prv>=md)
    prv=a[i],c++;
    
    return c;
}

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,ans,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        ll a[n];
        f0(i,n)
        cin>>a[i];
        sort(a,a+n);
        
        l=1;r=1000000000;
        
        while(l<=r)
        {
            ll md=(l+r)/2;
            
            cnt=check(a,n,md);
            
            if(cnt>=c)
            {ans=md;l=md+1;}
            else
            r=md-1;
            
        }
        
        cout<<ans<<ln;
    }
	return 0;
}
