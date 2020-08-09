// SK_001 - Rightful Distribution

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long int t,n,x,s,i;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    long long int a[n];
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    
	    sort(a,a+n);
	    s=n;
	    for(i=1;i<n;i++)
	    {
	        if(a[i]!=a[0])
	        break;
	    }
	    x=0;
	    for(;i<n;i++)
	    {
	        if(a[i]!=a[i-1])
	        {
	            x++;
	            s=s+x;
	            continue;
	        }
	        s=s+x;
	    }
	    
	    printf("%lld\n",s%1000000007);
	}
	return 0;
}
