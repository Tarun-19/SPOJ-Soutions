// HOTELS - Hotels Along the Croatian Coast

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
#define fabr(i,a,b) for(i=b;i>=a;i--)
using namespace std;
int main()
{
    FAST;
    ll t,m,n,i,j,k,l,p,q,r,ans,avg,sum;
    t=1;
    while(t--)
    {
        cin>>n>>m;
        
        ll a[n];
        fab(i,0,n-1)
        cin>>a[i];
        
        l=0;r=0;sum=0;ans=0;
        while(l<n)
        {
            
            while(r<n&&sum+a[r]<=m)
            {
                sum+=a[r++];
            }
            ans=max(ans,sum);
            sum-=a[l];
            // cout<<l<<" "<<r<<endl;
            
            l++;
            if(r>=n) break;
            
        }
        
        cout<<ans;
    }
	return 0;
}

