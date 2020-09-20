// DIVSTR - Divisible Strings

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
    ll t,n,i,j,k,l,p,q,r,ans,avg,sum,cnt,x;
    char ch;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str,s;
        getline(cin,str);
        getline(cin,s);
        
        if(str.size()==0||s.size()==0)
        {
            cout<<0<<"\n";
            continue;
        }
        
        p=0;cnt=0;
        fab(i,0,str.size()-1)
        {
            p%=s.size();
            ch=s[p];
            
            if(ch==str[i])
            {
                cnt++;
                p++;
                continue;
            }
        }
        // cout<<cnt<<"\n";
        
        x=cnt/s.size();
        x*=s.size();
        
        cout<<str.size()-x<<"\n";
    }
	return 0;
}

