// HONDA - Honda and Kagawa

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
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,m,cnt;
    cin>>t;
    it=0;
    while(t--)
    {
        cin>>x>>y>>l>>r;
        
        cout<<"Case "<<++it<<": ";
        
        x=pow(x+l,2);
        y=pow(y+r,2);
        
        double d=sqrt(x+y);
        
        cout<<setprecision(7)<<fixed<<d<<ln;
    }
	return 0;
}
