// ASHMHF - Meet Her Fast!

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,t,j,n,k,x,y,sx,sy;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        cout<<"Case "<<k<<": ";
        vector<pair<ll,ll>> v;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back({a[i],i+1});
        }
        
        sort(v.begin(),v.end());
        
        
        if(n%2==1)
        {
            x=n/2;
            x=v[x].second;
            
            cout<<x<<endl;
            continue;
        }
        
        x=n/2;
        x=min(v[x].second,v[x-1].second);
        
        cout<<x<<endl;
    }
	return 0;
}
