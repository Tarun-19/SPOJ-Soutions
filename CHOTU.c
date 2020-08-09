// CHOTU - Faridi and Yadav

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
int main() {
	int t;
	double a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lf%lf",&a,&b);
	    c=sqrt(((a*a)-(b*b))/(a*a));
	    c=c*2*a;
	    printf("%.3lf\n",c);
	}
	return 0;
}
