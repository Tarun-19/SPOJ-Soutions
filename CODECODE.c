// CODECODE - Coder Or NonCoder

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	int t,x,y;
	double d;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&x,&y);
	    d=((x*y)+(100-x)*(100-y))/10000.0000;
	    d=d*100;
	    printf("%.2lf%c\n",d,'%');
	}
	return 0;
}
