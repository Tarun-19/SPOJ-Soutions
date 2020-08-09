// EKO - Eko

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n,m,x,i,u,v,mid,sum,max=0,c;
    scanf("%lld%lld",&n,&m);
    long long int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(max<a[i])
        max=a[i];
    }
    
    u=0;
    v=max;c=0;
    
    while(1)
    {
        mid=(u+v)/2;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>mid)
            sum+=a[i]-mid;
        }
        
        if(sum<m)
        v=mid-1;
        
        if(sum==m||c>900)
        break;
        
        if(sum>m)
        {u=mid+1;c++;}
    }
    printf("%lld",mid);
	return 0;
}
