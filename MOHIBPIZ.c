// MOHIBPIZ - PIZZA

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	long long int n;
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    n=((n*n)+n)/2;
	    n++;
	    printf("%lld\n",n);
	}
	return 0;
}
