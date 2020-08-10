// ADDREV - Adding Reversed Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>

long long int rev(long long int n)
{
    long long int x=0;
    while(n>0)
    {
        x=x*10+(n%10);
        n=n/10;
    }
    return x;
}


int main() {
	long long int t,n1,n2;
	scanf("%lld",&t);
	while((t--)>0)
	{
	    scanf("%lld%lld",&n1,&n2);
	   printf("%lld\n",rev(rev(n1)+rev(n2)));
	    
	}
	
	
	return 0;
}
	
