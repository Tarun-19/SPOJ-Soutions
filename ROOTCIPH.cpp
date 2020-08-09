// ROOTCIPH - Decipher

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	long long int a,b,c;
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lld%lld%lld",&a,&b,&c);
	    c=(a*a)-(2*b);
	    printf("%lld\n",c);
	}
	return 0;
}
