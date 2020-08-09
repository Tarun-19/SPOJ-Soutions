// PRISMSA - TRIANGULAR PRISM

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
int main() {
	int t;
	double v;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lf",&v);
	    v=1.5000000000*sqrt(3)*(pow((4*v),.6666666666666666666666));
	    printf("%.10lf\n",v);
	}
	return 0;
}
