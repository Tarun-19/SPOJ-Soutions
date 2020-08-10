// AFS - Amazing Factor Sequence

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
long long int a[1000001]={0};

int main()
{
	long long int t,n,i,j;
	
	for(i=2;i<1000001;i++)
	{
	    j=1;
		while(i*j<=1000000)
		{
		    a[i*j]+=j;
		    j++;
		}
		
		a[i]+=a[i-1];
	}
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<a[n]<<endl;
	    
	}
	return 0;
}
