// REDARR2 - Reduce the array

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define ln "\n"
using namespace std;
int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    cin>>t;
    while(t--)
    {
        f=0;sum=0;flag=0;ans=0;cnt=0;
        cin>>n;
        
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        f0(i,n)
        {
            cin>>x;
            pq.push(x);
        }
        
        while(pq.size()>1)
        {
            x=pq.top();pq.pop();
            y=pq.top();pq.pop();
            ans+=x+y;
            pq.push(x+y);
        }
        
        cout<<ans<<ln;
    }
	return 0;
}
