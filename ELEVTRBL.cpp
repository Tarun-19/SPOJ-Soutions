// ELEVTRBL - Elevator Trouble

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
    ll t,n,i,j,k,l,p,q,r,ans,avg,sum,f,s,g,u,d;
    t=1;
    while(t--)
    {
        cin>>f>>s>>g>>u>>d;
        bool vis[1000100]={0};
        ll dis[1000100]={0};
        
        if(g==s)
        {
            cout<<0;continue;
        }
        
        queue<ll> qu;
        qu.push(s);
        vis[s]=1;
        while(qu.size()>0)
        {
            k=qu.front();qu.pop();
            
            if(k+u<=f&&!vis[k+u])
            {
                vis[k+u]=true;qu.push(k+u);
                dis[k+u]=dis[k]+1;
            }
            
            if(k-d>=0&&!vis[k-d])
            {
                vis[k-d]=true;qu.push(k-d);
                dis[k-d]=dis[k]+1;
            }
        }
        
        if(dis[g]==0)
        cout<<"use the stairs";
        else
        cout<<dis[g];
    }
	return 0;
}

