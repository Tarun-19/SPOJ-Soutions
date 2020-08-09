// DIVFACT - Divisors of factorial

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	long long int t,i,j,ans,m,n,c,x,y;
	long long int a[50001]={0};
	a[0]=1;a[1]=1;
	for(i=2;i*i<=50000;i++)
	{
		if(a[i]==0)
		{
			for(j=2*i;j<=50000;j+=i)
			a[j]=1;
		}
	}
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ans=1;
	    m=n;
	    for(i=2;((i<50001)&&(i<=m));i++)
	    {
	        if(a[i])
	        continue;
	        
	        c=0;
	        y=i;
	        while(y<=n)
	        {
	            c=c+(n/y);
	            y=y*i;
	        }
	        
	        ans=(ans*(c+1))%1000000007;
	    }
	    cout<<ans<<endl;
    }
	return 0;
}
