// SCPC11B - Alaska

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	long long int n,y,f,z,swp;
	while(1)
	{
	    scanf("%lld",&n);
	    if(n==0)
	    break;
	    n++;
	    long long int a[n];
	    a[n-1]=1422;
	    for(y=0;y<n-1;y++)
	    scanf("%lld",&a[y]);
	    for(y=0;y<n-1;y++)
	    {
	        for(z=0;z<n-1-y;z++)
	        {
	            if(a[z]>a[z+1])
	            {
	                swp=a[z];
	                a[z]=a[z+1];
	                a[z+1]=swp;
	            }
	        }
	    }
	    f=0;
	    for(y=0;y<n-1;y++)
	    {
	        if(a[y+1]-a[y]>200)
	        {
	            f=1;
	            break;
	        }
	    }
	    if(f==1)
	    {
	        printf("IMPOSSIBLE\n");
	    }
	    else
	    {
	        a[n-2]=2*(1422-a[n-2]);
	        if(a[n-2]>200)
	        {
	            printf("IMPOSSIBLE\n");
	            f=1;
	        }
	    }
	    if(f==0)
	    printf("POSSIBLE\n");
	}
	return 0;
}
