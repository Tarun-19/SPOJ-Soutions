// COMDIV - Number of common divisors

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <math.h>
long long int gcd(long long a,long long b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main(){
	long long int hcf,n,a,b,i,t,c,p,x;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld%lld",&a,&b);
	    if(b>a)
	    {
	        x=a;
	        a=b;
	        b=x;
	    }
	    hcf=gcd(a,b);
	    c=0;
	    for(i=1;i*i<=hcf;i++)
	    {
	        if(hcf%i==0)
	        c++;
	    }
	    c=c*2;
	    
	    p=sqrt(hcf);
	    if(p*p==hcf)
	    c--;
	    
	    printf("%lld\n",c);
	    
	}
	return 0;
}
