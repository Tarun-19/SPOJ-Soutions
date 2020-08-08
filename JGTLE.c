// JGTLE - Jalil Got TLE

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main()
{
    long long int t,a,b,c,res,i,tc;
    scanf("%lld",&t);
    for(tc=1;tc<=t;++tc)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        b=(b*(b+1))/2;
        c=(c*(c+1))/2;
        res=a*b*c;
        printf("Case %lld: %lld\n",tc,res);
    }
    return 0;
}
