// AMR10G - Christmas Play

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long int n,t,i,k,x,min;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld%lld",&n,&k);
	    long long int a[n];
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    
	    sort(a,a+n);
	    
	    if(k==1)
	    {
	        printf("0\n");
	        continue;
	    }
	    if(k==n)
	    {
	        printf("%lld\n",a[n-1]-a[0]);
	        continue;
	    }
	    
	    
	    min=10000000000;
	    //p=10000000000;
	    for(i=0;i<=n-k;i++)
	    {
	        x=a[i+k-1]-a[i];
	        if(min>x)
	        {
	            min=x;
	            //p=i;
	        }
	      //  cout<<x<<" ";
	    }
	    printf("%lld\n",min);
	}
	return 0;
}
