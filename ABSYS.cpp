// ABSYS - Anti-Blot System

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
long long int number(string s)
{
    
    long long int ans=0;
    for(int i=0;i<s.size();i++)
    {
        
        if(!((int)s[i]>=48&&(int)s[i]<=57))
        return -1;
        
        ans=ans*10+((int)s[i]-48);
        
    }
    
    return ans;
}

int main()
{
    long long int t,x,y,z;
    string a,b,c,d,e;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e;
        
        x=number(a);
        y=number(c);
        z=number(e);
        
        if(x<0)
        x=z-y;
        else if(y<0)
        y=z-x;
        else
        z=x+y;
        
        cout<<x<<" + "<<y<<" = "<<z<<endl;
    }
	return 0;
}
