// ADAQUEUE - Ada and Queue

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INOUT freopen(name".inp","r", stdin); freopen(name".out","w",stdout);
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,mx,mn,l,r,sum,ans,tmp,it,pos;
    string s;
    
    deque <ll> q;
    cin>>t;
    f=0;
    while(t--)
    {
        cin>>s;
        
        
        if(s=="back")
        {
            
            if(q.size()==0)
            {
                cout<<"No job for Ada?\n";
                continue;
            }
            
            
            if(f%2==0)
            {
                cout<<q.back()<<ln;
                q.pop_back();
            }
            else
            {
                cout<<q.front()<<ln;
                q.pop_front();
            }
        }
        
        if(s=="front")
        {
            if(q.size()==0)
            {
                cout<<"No job for Ada?\n";
                continue;
            }
            
            
            if(f%2==0)
            {
                cout<<q.front()<<ln;
                q.pop_front();
            }
            else
            {
                cout<<q.back()<<ln;
                q.pop_back();
            }
        }
        
        if(s=="reverse")
        {
            // if(q.size()>0)
            f++;//odd even
        }
        
        if(s=="push_back")
        {
            cin>>n;
            if(f%2==0)
            q.push_back(n);
            else
            q.push_front(n);
        }
        
        if(s=="toFront")
        {
            cin>>n;
            if(f%2==0)
            q.push_front(n);
            else
            q.push_back(n);
        }
        
        
    }
	return 0;
}
