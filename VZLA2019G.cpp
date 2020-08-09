// VZLA2019G - Gentleman s Wallet

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	unsigned long long int a[]={0,1,2,3,4,5,6,7,8,9,153,370,371,407,1634,8208,9474,54748,92727,93084,548834,1741725,4210818,9800817,9926315,24678050,24678051,88593477,146511208, 472335975, 534494836, 912985153,4679307774,32164049650, 32164049651, 40028394225, 42678290603, 44708635679, 49388550606, 82693916578, 94204591914,28116440335967,4338281769391370, 4338281769391371,21897142587612075, 35641594208964132, 35875699062250035,1517841543307505039};
	unsigned long long int i,t,n,x;
	scanf("%llu",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%llu",&n);
	    printf("Case #%llu: ",i);
	    
	    x=lower_bound(a,a+48,n)-a;
	    n=a[x];
	    
	    printf("%llu\n",n);
	}
	return 0;
}
