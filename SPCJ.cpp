// SPCJ - Gopu and Create Collections Part Two

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll unsigned long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define memo(a,b) memset(a,b,sizeof(a))
#define lcm(x,y) boost::math::lcm(x,y)
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define hi cout<<"hi\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    cin>>t;
    while(t--)
    {
        ans=0;
        unordered_map<ll,ll> mappu;
        cin>>n;
        ll a[n],vis[n]={0};
        f0(i,n)
        {
            cin>>tmp;
            a[i]=tmp;
            mappu[tmp]++;
        }
        
        sort(a,a+n,greater<ll>());
        f0(i,n)
        {
            if(mappu[a[i]]==0) continue;
            
            mappu[a[i]]--;
            
            x=a[i]/2;
            
            if(mappu[x]>0)
            {
                ans++;
                mappu[x]--;
                continue;
            }
            
        }
        
        cout<<ans<<ln;
    }
	return 0;
}
