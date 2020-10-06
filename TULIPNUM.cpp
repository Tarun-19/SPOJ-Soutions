// TULIPNUM - Tulip And Numbers

// Author: cf:Tarun_19/cc:tarun_19_
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll int
#define vll vector<ll>
#define pb push_back
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    it=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<it<<":"<<ln;
        cin>>n>>q;
        ll b[n+1];
        
        b[0]=0;
        x=-1000000000000000;
        f0(i,n)
        {
            cin>>tmp;
            b[i+1]=b[i];
            
            if(tmp!=x)
            {
                b[i+1]++;
                x=tmp;
            }
            
        }
        // f0(i,n+1) cout<<b[i]<<" ";
        // cout<<ln;
        
        while(q--)
        {
            cin>>l>>r;
            ans=b[r]-b[l-1];
            
            if(b[l-1]==b[l]) ans++;
            
            cout<<ans<<ln;
        }
        it++;
    }
	return 0;
}
