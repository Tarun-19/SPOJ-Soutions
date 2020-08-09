// MINSTACK - Smallest on the Stack

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ln "\n"
using namespace std;
int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    string s;
    char ch;
    stack<ll> sk;
    multiset <ll> st;
    
    cin>>t;
    while(t--)
    {
        cin>>s;
        
        if(s=="PUSH")
        {
            cin>>x;
            sk.push(x);
            st.insert(x);
        }
        
        if(s=="POP")
        {
            if(sk.size()==0)
            cout<<"EMPTY"<<ln;
            else
            {
                st.erase(st.find(sk.top()));
                sk.pop();
            }
        }
        
        
        if(s=="MIN")
        {
            if(sk.size()==0)
            cout<<"EMPTY"<<ln;
            else
            cout<<*st.begin()<<ln;
        }
        
    }
	return 0;
}
