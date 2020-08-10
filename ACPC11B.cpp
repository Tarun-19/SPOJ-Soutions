// ACPC11B - Between the Mountains

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int i,t,c,n,m,j,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        
        scanf("%lld",&m);
        long long int b[m];
        for(i=0;i<m;i++)
        scanf("%lld",&b[i]);
        
        c=100000000;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                x=abs(a[i]-b[j]);
                if(x<c)
                c=x;
            }
        }
        
        cout<<c<<endl;
    }
	return 0;
}
