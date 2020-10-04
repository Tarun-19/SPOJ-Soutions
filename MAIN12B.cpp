// MAIN12B - PrimeFactorofLCM

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define f0(i,n) for(i=0;i<n;i++)
#define ln "\n"
using namespace std;
const ll MAX=1000100;
vll v;
set<ll> st;

bool isComposite[MAX+10]={false};
void sieve()
{
    isComposite[1]=isComposite[0]=true;
    for (int i=2; i*i<=MAX; i++) 
    {
        if (isComposite[i]==false)
        for (int j=2; j*i<=MAX; j++)
        isComposite[i*j] = true;
    }
    
    for(int i=2;i<MAX;i++)
    if(!isComposite[i])
    v.pb(i);
}

void awesome(ll n)
{
    ll i,j,k,l,x,y,tmp,c=0;
    if(n==1) return;
    
    ll sz=v.size();
    for(i=0;i<sz;i++)
    {
        if(v[i]*v[i]>n) break;
        if(n%v[i]==0)
        {
            st.insert(v[i]);
            tmp=n/v[i];
            while(n%v[i]==0) n=n/v[i];
            
            st.insert(v[i]);
            c++;
        }
    }
    if(n>1) st.insert(n);///////
    
    if(c==0)
    st.insert(n);
}

int main()
{
    FAST;
    ll t,n,i,x,k;
    
    sieve();
    
    // for(auto it:v)
    // cout<<it<<" ";
    // cout<<ln;
    
    cin>>t;
    k=0;
    while(t--)
    {
        k++;cout<<"Case #"<<k<<": ";
        st.clear();
        cin>>n;
        
        f0(i,n)
        {
            cin>>x;
            awesome(x);
        }
        cout<<st.size()<<ln;
        for(auto it:st)
        cout<<it<<ln;
        cout<<ln;
        // cout<<"bb";
    }
    
    
	return 0;
}
