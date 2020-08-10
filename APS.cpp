// APS - Amazing Prime Sequence

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int prime[10000001]={0};
long int a[10000001]={0};


int main()
{
	int t,n,i,j;
	
	for(i=2;i<10000001;i++)
	{
		if(prime[i]==0)
		{
		    prime[i]=i;
			for(j=i;j<10000001;j+=i)
			if(prime[j]==0)
			prime[j]=i;
		}
		a[i]=a[i-1]+prime[i];
		//prime[i]+=prime[i-1];
	}
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<a[n]<<endl;
	    
	}
	return 0;
}
