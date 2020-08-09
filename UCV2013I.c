// UCV2013I - Tambourine

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
int main() {
	double r,n;
	while(1)
	{
	    scanf("%lf%lf",&r,&n);
	    if(r==0&&n==0)
	    break;
	    n=(3.14159265358/2.00000)/n;
	    r=r/(sin(n));
	    printf("%.2lf\n",r);
	}
	return 0;
}
