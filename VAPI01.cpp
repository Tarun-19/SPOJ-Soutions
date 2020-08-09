// VAPI01 - Vitaliy and Pie

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
#define F first
#define S second
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
#define memo(a,b) memset(a,b,sizeof(a))
#define lcm(x,y) boost::math::lcm(x,y)
//#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;
const ld pi=acos(-1);
const ll MAX=1100000;
const ll MIN=INT_MIN;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,m;

    string s;
    char ch;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>s;ans=0;
        
        unordered_map<char,ll> mappu;
        
        n=n*2-2;
        f0(i,n)
        {
            if(s[i]<123&&s[i]>96)
            {
                mappu[s[i]]++;
                continue;
            }
            
            if(mappu[s[i]+32]>0)
            {
                mappu[s[i]+32]--;
            }
            else
            {
                ans++;
            }
        }
        
        cout<<ans<<ln;
        
    }
	return 0;
}
