// NABILHACKER - Hack the Password

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
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
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        list<char> lst;
        auto it=lst.begin();
        
        f0(i,s.size())
        {
            if(s[i]=='-')
            {
                auto it2=it;
                it--;
                if(it==lst.end()) it++;
                else
                lst.erase(it),it=it2;//
                continue;
            }
            
            if(s[i]=='>')
            {
                if(it!=lst.end())
                it++;
                continue;
            }
            if(s[i]=='<')
            {
                if(it!=lst.begin())
                it--;
                continue;
            }
            
            lst.insert(it,s[i]);
        }
        
        for(auto it:lst) cout<<it;
        cout<<ln;
    }
	return 0;
}
