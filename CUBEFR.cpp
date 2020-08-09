// CUBEFR - Cube Free Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	long int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
	long int i,j,t,n;
	
	for(i=0;i<26;i++)
	{
	    p[i]=p[i]*p[i]*p[i];
	}
	
	long int a[1000001]={0};
	
	for(i=0;i<1000001;i++)
	{
	    for(j=0;j<26;j++)
	    {
	        if(i%p[j]==0)
	        {
	            a[i]=1;
	            break;
	        }
	}}
	j=0;
	for(i=0;i<1000001;i++)
	{
	    if(a[i]==0)
	    a[i]=++j;
	}
	
	scanf("%ld",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%ld",&n);
	    if(n==1)
	    {
	        printf("Case %ld: 1\n",i);
	        continue;
	    }
	    
	    
	    if(a[n]!=1)
	    printf("Case %ld: %ld\n",i,a[n]);
	    else
	    printf("Case %ld: Not Cube Free\n",i);
	}
	return 0;
}
