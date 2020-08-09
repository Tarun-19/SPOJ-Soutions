// VHELSING - Van Helsings gun

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
int main() {
	int t;
	double n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lf",&n);
	    n=(double)(8*n*n*n*(2-pow(2,.5)));
	    printf("%.4lf\n",n);
	}
	return 0;
}
