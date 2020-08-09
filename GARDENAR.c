// GARDENAR - Area of a Garden

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    double a,b,c,s,ar;
	    scanf("%lf%lf%lf",&a,&b,&c);
	    s=(a+b+c)/2.0;
	    ar=(0.5000)*(((sqrt(3)/4.000)*(a*a+b*b+c*c))+(3.0000*sqrt(s*(s-a)*(s-b)*(s-c))));
	    printf("%.2lf\n",ar);
	}
	return 0;
}
