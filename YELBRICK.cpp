// YELBRICK - The Yellow Brick Road

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
    long long int i,n,mn,ans;
    while(cin>>n)
    {
        if(n==0)
        break;
        ans=0;mn=100000000;
        
        long long int a[n],b[n],c[n];
        
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
            mn=min(mn,a[i]);
            mn=min(mn,b[i]);
            mn=min(mn,c[i]);
        }
        
        mn=mn*mn*mn;
        for(i=0;i<n;i++)
        ans+=(a[i]*b[i]*c[i])/mn;
        
        cout<<ans<<endl;
    }
	return 0;
}
