// IEEEBGAM - The Ball Game

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	double n;
	while(t--)
	{
	    scanf("%lf",&n);
	    printf("%.8lf\n",(n/(n+1)));
	}
	return 0;
}
