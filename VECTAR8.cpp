// VECTAR8 - Primal Fear

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int prime[1000010]={0};

int check(int n)
{
	int d,tmp=n,p,x;
	
	while(n>0)
	{
		if(n%10==0)
		return 0;
		n=n/10;
	}
	
	d=log10(tmp)+1;
	x=(int)pow(10,d-1);
	
	while(x>=10)
	{
		p=tmp%x;
		
		if(prime[p]==-1)
		return 0;
		
		x=x/10;
	}
	return 1;
}


int main()
{
	int i,j,t,k,l,n;
	
	prime[1]=-1;prime[0]=-1;
	for(i = 2; i*i <= 1000010; i++)
	{
		if(prime[i] != -1)
		{
			for(j = 2*i; j <=1000010 ; j += i)
			prime[j] = -1;
		}
	}
	
	
	int ans[1000010]={0};
	for(i=1;i<1000010;i++)
	{
	    if(check(i)&&prime[i]==0)
	    ans[i]=ans[i-1]+1;
	    else
	    ans[i]=ans[i-1];
	}
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    cout<<ans[n]<<endl;
	    
	}
	
	return 0;
}
