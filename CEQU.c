// CEQU - Crucial Equation

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <stdlib.h>
long int gcd(long int a,long int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main() {
	long int t,i,a,b,c,swp;
	scanf("%ld",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%ld%ld%ld",&a,&b,&c);
	    printf("Case %ld: ",i);
	    a=abs(a);b=abs(b);c=abs(c);
	    
	    if(b>a)
	    {swp=b;b=a;a=swp;}
	    
	    if(c%(gcd(a,b))==0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}
