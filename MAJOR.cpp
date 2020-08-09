// MAJOR - Majority

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	long long int n,x,t,i,f;
	scanf("%lld",&t);
	while(t--)
	{
	    long long int a[2001]={0};
	    scanf("%lld",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&x);
	        a[x+1000]++;
	    }
	    n=n/2;f=0;
	    for(i=0;i<2001;i++)
	    {
	        if(a[i]>n)
	        {
	            printf("YES %lld\n",(i-1000));
	            f=1;
	            break;
	        }
	    }
	    if(f==0)
	    printf("NO\n");
	}
	
	return 0;
}
