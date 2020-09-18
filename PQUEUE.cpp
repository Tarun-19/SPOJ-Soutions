// PQUEUE - Printer Queue

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define ff first
#define ss second
#define fab(i,a,b) for(i=a;i<=b;i++)
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define hi cout<<"hi\n"
#define ln "\n"
using namespace std;


int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,mx,mn,l,r,sum,ans,tmp,tm,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        queue<pair<ll,ll>> q;
        priority_queue<ll> pq;
        fab(i,0,n-1)
        {
            cin>>tmp;
            pq.push(tmp);
            q.push({tmp,i});
        }
        
        tm=0;
        while(q.size()>0)
        {
			if(q.front().ff!=pq.top())
			{
				q.push(q.front());
				q.pop();
			}
			else
			{
				tm++;
				pq.pop();
				
				if(q.front().ss==m)
				break;
				q.pop();
			}
			
        }
        
        cout<<tm<<ln;
    }
	return 0;
}
