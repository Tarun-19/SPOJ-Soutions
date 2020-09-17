// RKS - RK Sorting

//  Author: Tarun Kumar
//  E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define f0(i,n) for(i=0;i<n;i++)
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    unordered_map<ll,ll> mappu,mappi;
    t=1;
    while(t--)
    {
        cin>>n>>c;
        vector<pair<ll,pair<ll,ll>>> v(n);
        f0(i,n)
        {
            cin>>tmp;
            
            if(mappu[tmp]>0)
            {
                v[i].ss.ff=mappi[tmp];
            }
            else
            {
                v[i].ss.ff=i;
                mappi[tmp]=i;
            }
            mappu[tmp]++;
            
            v[i].ss.ss=tmp;
        }
        
        f0(i,n)
        {
            v[i].ff=(-1)*mappu[v[i].ss.ss];
        }
        
        sort(v.begin(),v.end());
        
        for(auto it:v) cout<<it.ss.ss<<" ";
        // for(auto it:v) cout<<it.ff<<" "<<it.ss.ff<<" "<<it.ss.ss<<"\n";
    }
	return 0;
}
