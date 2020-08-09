// FAVDICE - Favorite Dice

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	int n,t,i;
	float s;
	scanf("%d",&t);
	while(t--)
	{
	    s=0;
	    scanf("%d",&n);
	    for(i=1;i<=n;i++)
	    s=s+(1/((float)(i)));
	    s=s*n;
	    printf("%.2f\n",s);
	}
	return 0;
}
