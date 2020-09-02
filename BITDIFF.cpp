// BITDIFF - Bit Difference

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define memo(a,b) memset(a,b,sizeof(a))
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,sum,tmp,it,x;
    unordered_map<ll,ll> mappu;
    cin>>t;
    it=0;
    while(t--)
    {
        it++;
        cout<<"Case "<<it<<": ";
        
        mappu.clear();
        cin>>n;
        ll a[n];
        f0(i,n)
        {
            cin>>x;
            bitset<33> bt(x);
            f0(j,33)
            mappu[j]+=bt[j];
        }
        
        sum=0;
        for(auto it:mappu)
        {
            x=it.second;
            tmp=x*(n-x)*2;
            sum=(sum+tmp)%10000007;
        }
        
        cout<<sum<<ln;
        
    }
	return 0;
}
