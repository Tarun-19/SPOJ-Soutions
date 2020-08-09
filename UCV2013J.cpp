// UCV2013J - Valences

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	unsigned long long int s=0,y,i,n,x;
	while(1)
	{
	    scanf("%llu",&n);
	    if(n==0)
	    break;
	    s=0;
	    x=n/2;
	    for(i=0;i<n;i++)
	    {
	        scanf("%llu",&y);
	        if(x<=i)
	        s=s+y;
	    }
	    printf("%llu\n",s);
	}
	return 0;
}
