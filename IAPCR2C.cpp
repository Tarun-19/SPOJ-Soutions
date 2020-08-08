// IAPCR2C - Study Room

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long int t,n,cnt,i,x,m,it;
    scanf("%lld",&t);
    for(it=1;it<=t;it++)
    {
        cout<<"Case "<<it<<": ";
        cnt=0;
        scanf("%lld",&n);
        int a[n+2]={0};
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>x;
            a[x]=1;a[x+1]=1;a[x-1]=1;
        }
       // a[0]=0;a[n+1]=0;
        for(i=1;i<=n;i++)
        cnt+=a[i];
        
        cout<<cnt<<endl;
        
        
    }
	return 0;
}
