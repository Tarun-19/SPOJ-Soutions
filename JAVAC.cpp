// JAVAC - Java vs C ++

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;
ll cpp_iden(string s)
{
    ll i,f=0;
    f0(i,s.size())
    if(s[i]<='Z'&&s[i]>='A')
    f=1;
    f0(i,s.size()-1)
    if(s[i]=='_'&&s[i+1]=='_')
    f=1;
    if(s.front()=='_'||s.back()=='_')
    f=1;
    return f;
}

ll java_iden(string s)
{
    ll i,f=0;
    f0(i,s.size())
    if(s[i]=='_')
    f=1;
    if(s.front()<='Z')
    f=1;
    return f;
}

void form_java(string s)
{
    string str="";ll i;
    f0(i,s.size())
    {
        if(s[i]=='_')
        {
            str=str+(char)(s[i+1]-32);
            i++;
        }
        else
        str+=s[i];
    }
    cout<<str<<ln;
}

void form_cpp(string s)
{
    string str="";ll i;
    f0(i,s.size())
    {
        if(s[i]<='Z')
        {
            str+='_';
            str=str+(char)(s[i]+32);
        }
        else
        str+=s[i];
    }
    cout<<str<<ln;
}


int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos;
    string s;
    while(cin>>s)
    {
        if(!cpp_iden(s))
        form_java(s);
        else if(!java_iden(s))
        form_cpp(s);
        else
        cout<<"Error!\n";
    }
	return 0;
}
