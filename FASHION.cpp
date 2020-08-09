// FASHION - Fashion Shows

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int main() {
	int t,n,x=0;
	cin>>t;
	
	
	while(x!=t)
	{
		cin>>n;
		int a[n],b[n];
		for(int c1=0 ;c1<n ;c1++)
		cin>>a[c1];
		for(int c2=0 ;c2<n ;c2++)
		cin>>b[c2];
		
		
		
		
		for(int i=0 ;i<n-1 ;i++)
		{
			for(int j=0 ;j<n-i-1;j++)
			{   int temp;
				if(a[j+1]>a[j])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		
		
		
		
		
	for(int i=0 ;i<n-1 ;i++)
		{
			for(int j=0 ;j<n-i-1;j++)
			{   int temp;
				if(b[j+1]>b[j])
				{
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			}
		}
		
		
		int sum=0;
		for(int i=0 ;i<n ;i++)
		{
		sum=sum+a[i]*b[i];
		}
		
		
		
		cout<<sum<<endl;
		x++;
	}
	return 0;
}
