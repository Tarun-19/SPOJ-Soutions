// DIVFIBS - Divisible Fibonacci Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main(){
	unsigned long long int t,c,i,n,m,l,r;
	unsigned long long int a[100050]={0};
	
	cin>>t;
	while(t--)
	{
	    cin>>l>>r>>m;
	    c=0;
	    
	    a[0]=0%m;a[1]=1%m;
	
	    for(i=2;i<100050;i++)
	    {
	        a[i]=(a[i-1]+a[i-2])%m;
	    }
	    for(i=l;i<=r;i++)
	    {
	        if(a[i]%m==0)
	        c++;
	    }
	
	cout<<c<<endl;
	
	}
	return 0;
}
