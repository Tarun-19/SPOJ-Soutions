// CIRCLE_E - Three Circle Problem (EASY)

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
int main() {
	int t;
	double a,b,c,ans;
	scanf("%d",&t);
	while(t--){
	scanf("%lf%lf%lf",&a,&b,&c);
	ans=(a*b*c)/(((a*b)+(a*c)+(b*c)+2*(sqrt((a*b*c)*(a+b+c)))));
	printf("%.6lf\n",ans);
	}
	return 0;
}
