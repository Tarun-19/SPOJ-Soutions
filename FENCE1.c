// FENCE1 - Build a Fence

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	    int l;
	    scanf("%d",&l);
	    while(l)
	    {
	        float ans;
	       ans=(float)(l*l/(2.000*3.14159));
	        printf("%.2f\n",ans);
	        scanf("%d",&l);
	    }
	return 0;
}
