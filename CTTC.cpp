// CTTC - Counting Child

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
    ll t,n,i,it;
    cin>>t;
    it=0;
    while(t--)
    {
        cout<<"Case "<<++it<<":\n";
        cin>>n;
        
        ll a[n+n];
        fab(i,0,n+n-1)
        cin>>a[i];
        
        ll cnt[n+1]={0};
        stack<ll> sk;
        
        sk.push(0);
        fab(i,0,n+n-1)
        {
            if(sk.top()==a[i])
            {
                sk.pop();
            }
            else
            {
                cnt[sk.top()]++;
                sk.push(a[i]);
            }
        }
        
        fab(i,1,n)
        cout<<i<<" -> "<<cnt[i]<<"\n";
        
        cout<<endl;
    }
	return 0;
}
