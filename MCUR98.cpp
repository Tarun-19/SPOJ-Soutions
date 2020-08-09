// MCUR98 - Self Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define memo(a,b) memset(a,b,sizeof(a))
#define ln "\n"
using namespace std;
int main()
{
    FAST;
    ll t,i,x,s;
    
    bitset <1000001> bt;
    
    f0(i,1000001)
    {
        s=i;
        x=i;
        while(i>0)
        {
            s+=(i%10);
            i/=10;
        }
        i=x;
        if(s<1000001)
        bt[s]=1;
    }
    
    f0(i,1000000)
    if(!bt[i])
    cout<<i<<ln;
    
	return 0;
}
