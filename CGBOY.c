// CGBOY - High CG Boy

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	float n,c;
	while(t--)
	{
	    scanf("%f%f",&n,&c);
	    n--;
	    c=c*n;
	    c=(c+((8-n)*4.0))/8.0;
	    printf("%.2f\n",c);
	}
	return 0;
}
