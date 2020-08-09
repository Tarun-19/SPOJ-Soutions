// CBIT01 - Game of Square 

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main() {
	long long int i,j,t,n,y;
	long long int b[100001]={0};
	b[0]=1;b[1]=1;b[2]=0;
	for(i=3;i<100001;i++)
	{
		for(j=1;j*j<=i;j++)
		{
		    y=j*j;
		    if(y==i)
		    {
		        b[i]=1;
		    }
		    else
		    {
		        if(b[i-y]==0)
		        {
		            b[i]=1;
		            break;
		        }
		    }
		}
	}
	b[0]=0;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    if(b[n]==1)
	    printf("Win\n");
	    else
	    printf("Lose\n");
	}
	
	return 0;
}
