// MKMONEY - Making Money

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
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)

#define ln "\n"

using namespace std;
const ld pi=acos(-1);
const ll mod=1e9+7;
const ll MAX=INT_MAX;
const ll MIN=INT_MIN;

int main()
{
    FAST;
    ll i,x,k=0,n;
    string s;
    while(1)
    {
        k++;
        ld p,r;
        
        cin>>p>>r>>n;
        if(p==0&&r==0&n==0)
        break;
        
        
        ld amt=0.0,tmp;
        
        printf("Case %lld. $%.2Lf at %.2Lf%% APR compounded %lld times yields $",k,p,r,n);
        r=r/n;
        for(i=0;i<n;i++)
        {
            
            tmp=floor(p*(100.0+r))/100.0;
            //ll t2=tmp*100.0;
            
            //amt=t2/100.0;
            p=amt=tmp;
        }
        
        printf("%.2Lf\n",amt);
        
    }
	return 0;
}
