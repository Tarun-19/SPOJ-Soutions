// ADAM1 - Adrita and Marbles

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
    ll t,n,i,j,k,l,p,q,r,ans,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>p>>q>>z;
        
        ans=0;
        cin>>n;
        while(n--)
        {
            cin>>x>>y;
            
            if(x*x+y*y+z-p*x-q*y<0)
            ans++;
        }
        
        
        cout<<ans<<endl;
    }
	return 0;
}

