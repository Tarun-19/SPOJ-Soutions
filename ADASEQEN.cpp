// ADASEQEN - Ada and Subsequence

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
#define fabr(i,a,b) for(i=b;i>=a;i--)
using namespace std;
int main()
{
    FAST;
    ll t,n,i,j,k,l,m,q,r,ans,avg,sum;
    t=1;
    while(t--)
    {
        cin>>n>>m;
        string x,y;
        
        ll p[26];
        fab(i,0,25) cin>>p[i];
        cin>>x>>y;
        
        ll lcs[n+1][m+1];
        
        fab(i,0,n)
        {
            fab(j,0,m)
            {
                if(i==0||j==0) lcs[i][j]=0;
                else if(x[i-1]==y[j-1]) lcs[i][j]=lcs[i-1][j-1]+p[x[i-1]-'a'];
                else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                // cout<<lcs[i][j]<<" ";
            }
            // cout<<endl;
        }
        
        
        cout<<lcs[n][m]<<"\n";
        
    }
	return 0;
}

