// SPCS - Gopu And Palindromes

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int check22(char s[],int sz)
{
    int l=0,r=sz-1;
    while(l<r)
    {
        if(s[l]!=s[r])
        return 0;
        r--;l++;
    }
    
    return 1;
}

int main(){
    FAST;
	int t,i,l,p;
	string str,s,sr;
	cin>>t;
	while(t--)
	{
	    cin>>str;l=str.size();
	    
	   // s="";
	    char v[l];p=0;
	    
	    for(i=0;i<l-1;i++)
	    {
	        if(str[i]!=str[i+1])
	        {
	           // s=s+str[i];
	            v[p++]=str[i];
	        }
	    }
	    
	   // if(s.back()!=str.back())
	    if(v[p-1]!=str[l-1])
	    {
	       // s=s+str[l-1];
	        v[p++]=str[l-1];
	    }
	    
	   // for(i=0;i<p;i++)
	   // cout<<v[i];cout<<"=="<<s<<"==";
	    
	   // if(!check(s))
	    if(!check22(v,p))
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	}
	return 0;
}
