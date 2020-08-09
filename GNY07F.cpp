// GNY07F - Monkey Vines

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
long long int ans(long long int n)
{
    long long int x=1;
    while(n--)
    x=x*2;
    return x;
}
int main()
{
    long long int i,n,mx,x,t,j;
    string s;
    cin>>t;
    cin.ignore();
    for(j=1;j<=t;j++)
    {
        getline(cin,s);
        
        mx=0;x=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                x++;
                mx=max(mx,x);
            }
            else
            x--;
        }
        cout<<j<<" "<<ans(mx)<<endl;
    }
	return 0;
}
