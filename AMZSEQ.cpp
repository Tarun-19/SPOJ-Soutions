// AMZSEQ - AMZ Word

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	unsigned long long int n,i,m,x,y,a,b;
	cin>>n;
	if(n==1)
	cout<<"3";
	else if(n==2)
	cout<<"7";
	else
	{
	    a=2;b=4;
	    n=n-2;
	    y=7;
	    while(n>0)
	    {
	        x=(3*y)-b;
	        m=b;
	        b=a+b*2;
	        a=m;
	        
	        y=x;
	        n--;
	        
	    }
	    cout<<x;
	    
	}
	return 0;
}
