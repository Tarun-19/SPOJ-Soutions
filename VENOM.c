// VENOM - Touch of Venom

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
int main() {
    int t,h,p,a;
    long long int x;
    double m,n,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&h,&p,&a);
        if(h<=p)
        {
            printf("1\n");
            continue;
        }
        m=2*a-p;
        n=(m*m)-(8*p*(a-h));
        d=sqrt(n);
        x=ceil((m+d)/(2*p));
        printf("%lld\n",((2*x)-1));
    }
	return 0;
}
