// VZLA2019E - Empanadas

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
    ll t,n,i,ans;
    t=1;
    while(t--)
    {
        cin>>n;
        
        ll a[n],b[n];
        
        fab(i,0,n-1)
        cin>>a[i];
        fab(i,0,n-1)
        cin>>b[i];
        
        ll dpa[n],dpb[n];
        ll mxa=a[0],mxb=b[0];
        
        dpa[0]=a[0];
        dpb[0]=b[0];
        
        fab(i,1,n-1)
        {
            dpa[i]=mxb+a[i];
            dpb[i]=mxa+b[i];
            
            if(dpa[i]>mxa) mxa=dpa[i];
            if(dpb[i]>mxb) mxb=dpb[i];
        }
        
        ans=max(mxa,mxb);
        cout<<ans;
    }
	return 0;
}
