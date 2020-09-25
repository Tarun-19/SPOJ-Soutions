// BITPLAY - PLAYING WITH BITS

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
    ll t,n,i,j,k,l,p,q,r,ans,avg,sum,cnt,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        
        if(!k)
        {
            cout<<-1<<"\n";
            continue;
        }
        
        n--;
        cnt=__builtin_popcount(n);
        // cout<<cnt<<" "<<k<<"\n";
        if(cnt<=k)
        {
            if(n&1)
            cout<<n<<"\n";//odd??
            else
            cout<<n-1<<"\n";
            continue;
        }
        
        
        bitset<32> bt(n);
        // fab(i,0,31)
        // cout<<bt[i];cout<<"\n";
        
        // cout<<"x="<<x<<"\n";
        while(bt.count()>k)
        {
            fab(i,1,31)
            {
                if(bt[i]==1)
                {
                    bt[i]=0;
                    break;
                }
            }
        }
        
        // fab(i,0,31)
        // cout<<bt[i];cout<<"\n";
        
        ans=bt.to_ulong();
        cout<<ans<<"\n";
    }
	return 0;
}

