// PRADIPSUM - Easy Math

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	long long int m,n,x,y;
	while(cin>>m>>n)
	{
	    if(m>n)
	    {y=m;
	    m=n;
	    n=y;}
	    
	    x=n-m+1;
	    x=((x*x-x)/2)+(x*m);
	    cout<<x<<endl;
	}
	return 0;
}
