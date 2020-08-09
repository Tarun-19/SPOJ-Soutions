// OLOLO - Onotole needs your help

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long int n,i,j,x;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    
    sort(a,a+n);
    
    x=-1;
    for(i=0;i<n-1;i+=2)
    {
        if(a[i]!=a[i+1])
        {
            x=a[i];
            break;
        }
    }
    if(x==-1)
    printf("%lld",a[n-1]);
    else
    printf("%lld",x);
	return 0;
}
