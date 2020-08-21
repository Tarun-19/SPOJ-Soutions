// PEBBLE - Pebble Solver

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define memo(a,b) memset(a,b,sizeof(a))
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    string s;
    it=0;
    while(cin>>s)
    {
        it++;
        cout<<"Game #"<<it<<": ";
        ans=0;
        
        c=0;
        f0(i,s.size())
        {
            
            if(c&1)
            s[i]=(s[i]=='0')?'1':'0';
            
            if(s[i]=='0') continue;
            
            c++;
            
        }
        
        cout<<c<<ln;
        
    }
	return 0;
}
