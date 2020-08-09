// MAIN12A - SelfDescribingSequenceProblem

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define f0(i,n) for(i=0;i<n;i++)
#define ln "\n"
using namespace std;

vll v;

void awesome()
{
    ll i,j,k,l,n,x,y,tmp;
    
    v.pb(1);
    v.pb(2);
    x=3;
    i=1;
    
    while(v.size()<1000100)
    {
        f0(j,v[i])
        v.pb(x);
        
        i++;
        x++;
    }
}

int main()
{
    FAST;
    ll t,n,i;
    
    awesome();
    
    cin>>t;
    f0(i,t)
    {
        cin>>n;
        cout<<"Case #"<<i+1<<": "<<v[n-1]<<ln;
    }
    
	return 0;
}
