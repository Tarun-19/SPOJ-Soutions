// STPAR - Street Parade

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define ln "\n"
using namespace std;
int main()
{
    FAST;
    ll t,n,i,j,k,l,p,q,r,ans,avg,sum;
    while(cin>>n)
    {
        stack<ll> sk;
        vector<ll> v;
        if(!n) return 0;
        
        k=1;
        fab(i,1,n)
        {
            cin>>p;
            
            while(sk.size()>=1&&v.size()>=1&&sk.top()==k)
            {
                v.push_back(sk.top());
                sk.pop();
                k++;
            }
            
            if(k==p)
            {
                v.push_back(p);k++;
            }
            else
            {
                sk.push(p);
            }
            while((sk.size()>=1)&&(v.size()>=1)&&(sk.top()==k))
            {
                v.push_back(sk.top());
                sk.pop();
                k++;
            }
        }
        
        if(v.size()==n)
        cout<<"yes"<<ln;
        else
        cout<<"no"<<ln;
    }
	return 0;
}

