// IAPCR2E - Ballons Revisited

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll it,t,w,r,g,b,tmp,tot,ans;
    cin>>t;
    it=0;
    
    ll a[4];
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        cout<<"Case "<<++it<<": ";
        sort(a,a+4);
        
        ans=(a[0]+a[1]+a[2]+a[3])/4;
        
        ans=min(ans,a[0]+a[1]+a[2]);
        cout<<ans<<ln;
    }
	return 0;
}
