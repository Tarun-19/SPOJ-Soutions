// RPLH - Hard Launching

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long double rmx,u,pi=3.141592650000,g=9.8060000000,r;
	long int t,i;
	
	scanf("%ld",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%Lf%Lf",&r,&u);
	    printf("Scenario #%ld: ",i);
	    rmx=(u*u)/g;
	    if(rmx<r)
	    printf("-1\n");
	    else
	    {
	        rmx=(90.0000000/pi)*(asin((r*g)/(u*u)));
	        printf("%.2Lf\n",rmx);
	    }
	    
	}
	return 0;
}
