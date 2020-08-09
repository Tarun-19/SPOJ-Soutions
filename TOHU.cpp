// TOHU - Help Tohu

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	
	long long int t,n;
	long double d;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    d=(long double)(n*n+3.000000*n)/(long double)(4.00000*(n+1.000000)*(n+2.00000));
	    printf("%.11Lf\n",(d+.500000000000));
	}
	return 0;
}
